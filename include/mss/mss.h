#ifndef MSS_H
#define MSS_H

#include <windows.h>

#ifdef MSS_BUILD_STUB
#define MSS_DECLSPEC __declspec(dllexport)
#else
#define MSS_DECLSPEC __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef char C8;
typedef signed char S8;
typedef signed short int S16;
typedef signed long int S32;
typedef unsigned char U8;
typedef unsigned short int U16;
typedef unsigned long int U32;
typedef float F32;
typedef double F64;

typedef void *AILLPDIRECTSOUND;
typedef void *AILLPDIRECTSOUNDBUFFER;
typedef int DIGDRVSTAGE;
typedef S32 HDRIVERSTATE;
typedef U32 HINTENUM;
typedef S32 HTIMER;
typedef int RIB_DATA_SUBTYPE;
typedef int RIB_ENTRY_TYPE;
typedef int RIB_INTERFACE_ENTRY;
typedef S32 RIBRESULT;
typedef int SAMPLESTAGE;

typedef enum AILPREFERENCE AILPREFERENCE;
enum AILPREFERENCE {
    DIG_MIXER_CHANNELS = 1,
    DIG_DEFAULT_VOLUME = 2
};

typedef enum HPROENUM HPROENUM;
enum HPROENUM {
    HPROENUM_FIRST = 0
};

typedef enum M3DRESULT M3DRESULT;
enum M3DRESULT {
    M3D_NOERR = 0
};

typedef enum SAMPLESTATUS SAMPLESTATUS;
enum SAMPLESTATUS {
    SMP_PLAYING = 0x0004
};

typedef struct AILDLSINFO AILDLSINFO;
struct AILDLSINFO;

typedef struct AILMIXINFO AILMIXINFO;
struct AILMIXINFO;

typedef struct AILINPUTINFO AILINPUTINFO;
struct AILINPUTINFO;

typedef struct AILSOUNDINFO AILSOUNDINFO;
struct AILSOUNDINFO {
    S32 format;
    void *data_ptr;
    U32 data_len;
    U32 rate;
    S32 bits;
    S32 channels;
    U32 samples;
    U32 block_size;
    void *initial_ptr;
};

typedef struct Mss3dPObject *H3DPOBJECT;
typedef struct Mss3dPObject *H3DSAMPLE;
struct Mss3dPObject;

typedef struct MssDigDriver *HDIGDRIVER;
struct MssDigDriver;

typedef struct MssDigInput *HDIGINPUT;
struct MssDigInput;

typedef struct MssDlsDevice *HDLSDEVICE;
struct MssDlsDevice;

typedef struct MssDlsFileId *HDLSFILEID;
struct MssDlsFileId;

typedef struct MssAudio *HAUDIO;
struct MssAudio;

typedef struct MssMdiDriver *HMDIDRIVER;
struct MssMdiDriver;

typedef struct MssProvider *HPROVIDER;
struct MssProvider;

typedef struct MssRedBook *HREDBOOK;
struct MssRedBook;

typedef struct MssSample *HSAMPLE;
struct MssSample;

typedef struct MssSequence *HSEQUENCE;
struct MssSequence;

typedef struct MssStream *HSTREAM;
struct MssStream;

typedef struct MssWaveSynth *HWAVESYNTH;
struct MssWaveSynth;

typedef void (__stdcall *AILBEATCB)(HMDIDRIVER hmi, HSEQUENCE seq, S32 beat, S32 measure);
typedef S32 (__stdcall *AILEVENTCB)(HMDIDRIVER hmi, HSEQUENCE seq, S32 status, S32 data_1, S32 data_2);
typedef S32 (__stdcall *AILLENGTHYCB)(U32 state, U32 user);
typedef S32 (__stdcall *AILPREFIXCB)(HSEQUENCE seq, S32 log, S32 data);
typedef void (__stdcall *AILSAMPLECB)(HSAMPLE sample);
typedef void (__stdcall *AILSEQUENCECB)(HSEQUENCE seq);
typedef void (__stdcall *AILSTREAMCB)(HSTREAM stream);
typedef S32 (__stdcall *AILTIMBRECB)(HMDIDRIVER hmi, S32 bank, S32 patch);
typedef void (__stdcall *AILTIMERCB)(U32 user);
typedef void (__stdcall *AILTRIGGERCB)(HSEQUENCE seq, S32 log, S32 data);

extern MSS_DECLSPEC void __cdecl DLSClose(HDLSDEVICE dls, U32 flags);
extern MSS_DECLSPEC void __cdecl DLSCompactMemory(HDLSDEVICE dls);
extern MSS_DECLSPEC void __cdecl DLSGetInfo(HDLSDEVICE dls, AILDLSINFO* info);
extern MSS_DECLSPEC void __cdecl DLSLoadFile(HDLSDEVICE dls, char* filename, U32 flags);
extern MSS_DECLSPEC void __cdecl DLSLoadMemFile(HDLSDEVICE dls, void* memfile, U32 flags);
extern MSS_DECLSPEC HDLSDEVICE __cdecl DLSMSSOpen(HMDIDRIVER mdi, HDIGDRIVER dig, char* libname, U32 flags, U32 rate, S32 bits, S32 channels);
extern MSS_DECLSPEC S32 __stdcall DLSMSSGetCPU(HDLSDEVICE dls);
extern MSS_DECLSPEC void __cdecl DLSSetAttribute(HDLSDEVICE dls, char *attr, void *value);
extern MSS_DECLSPEC void __cdecl DLSUnloadAll(HDLSDEVICE dls);
extern MSS_DECLSPEC void __cdecl DLSUnloadFile(HDLSDEVICE dls, HDLSFILEID dlsid);
extern MSS_DECLSPEC HPROVIDER __cdecl RIB_alloc_provider_handle(U32 module);
extern MSS_DECLSPEC void __cdecl RIB_free_provider_handle(HPROVIDER provider);
extern MSS_DECLSPEC HPROVIDER __cdecl RIB_load_provider_library(C8* filename);
extern MSS_DECLSPEC void __cdecl RIB_free_provider_library(HPROVIDER provider);
extern MSS_DECLSPEC HPROVIDER __stdcall RIB_provider_library_handle(void);
extern MSS_DECLSPEC RIBRESULT __cdecl RIB_register_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, const RIB_INTERFACE_ENTRY* rlist);
extern MSS_DECLSPEC RIBRESULT __cdecl RIB_unregister_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, const RIB_INTERFACE_ENTRY* rlist);
extern MSS_DECLSPEC RIBRESULT __cdecl RIB_request_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, RIB_INTERFACE_ENTRY* rlist);
extern MSS_DECLSPEC RIBRESULT __cdecl RIB_request_interface_entry(HPROVIDER provider, C8* interface_name, RIB_ENTRY_TYPE entry_type, C8* entry_name, U32* token);
extern MSS_DECLSPEC S32 __cdecl RIB_enumerate_interface(HPROVIDER provider, C8* interface_name, RIB_ENTRY_TYPE type, HINTENUM* next, RIB_INTERFACE_ENTRY* dest);
extern MSS_DECLSPEC S32 __stdcall RIB_enumerate_providers(C8* interface_name, HPROENUM* next, HPROVIDER* dest);
extern MSS_DECLSPEC C8* __cdecl RIB_type_string(U32 data, RIB_DATA_SUBTYPE subtype);
extern MSS_DECLSPEC HPROVIDER __cdecl RIB_find_file_provider(C8* interface_name, C8* attribute_name, C8* file_suffix);
extern MSS_DECLSPEC HPROVIDER __stdcall RIB_find_provider(C8* interface_name, C8* attribute_name, C8* attribute_value);
extern MSS_DECLSPEC S32 __stdcall RIB_load_application_providers(C8* filespec);
extern MSS_DECLSPEC void __stdcall RIB_set_provider_user_data(HPROVIDER provider, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall RIB_provider_user_data(HPROVIDER provider, U32 index);
extern MSS_DECLSPEC void __stdcall RIB_set_provider_system_data(HPROVIDER provider, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall RIB_provider_system_data(HPROVIDER provider, U32 index);
extern MSS_DECLSPEC C8* __cdecl RIB_error(void);
extern MSS_DECLSPEC void* __stdcall AIL_mem_alloc_lock(U32 size);
extern MSS_DECLSPEC void __stdcall AIL_mem_free_lock(void* ptr);
extern MSS_DECLSPEC S32 __stdcall AIL_file_error(void);
extern MSS_DECLSPEC S32 __stdcall AIL_file_size(char* filename);
extern MSS_DECLSPEC void* __stdcall AIL_file_read(char* filename, void* dest);
extern MSS_DECLSPEC S32 __stdcall AIL_file_write(char* filename, void* buf, U32 len);
extern MSS_DECLSPEC S32 __stdcall AIL_WAV_file_write(char* filename, void* buf, U32 len, S32 rate, S32 format);
extern MSS_DECLSPEC S32 __stdcall AIL_startup(void);
extern MSS_DECLSPEC S32 __stdcall AIL_get_preference(U32 number);
extern MSS_DECLSPEC void __stdcall AIL_shutdown(void);
extern MSS_DECLSPEC S32 __stdcall AIL_set_preference(U32 number, S32 value);
extern MSS_DECLSPEC char* __stdcall AIL_last_error(void);
extern MSS_DECLSPEC void __stdcall AIL_set_error(char* error_msg);
extern MSS_DECLSPEC void __cdecl AIL_debug_printf(C8* fmt, ...);
extern MSS_DECLSPEC void __cdecl AIL_sprintf(C8* s, C8* fmt, ...);
extern MSS_DECLSPEC U32 __stdcall AIL_MMX_available(void);
extern MSS_DECLSPEC void __stdcall AIL_lock(void);
extern MSS_DECLSPEC void __stdcall AIL_unlock(void);
extern MSS_DECLSPEC void __stdcall AIL_delay(S32 intervals);
extern MSS_DECLSPEC S32 __stdcall AIL_background(void);
extern MSS_DECLSPEC HTIMER __stdcall AIL_register_timer(AILTIMERCB fn);
extern MSS_DECLSPEC U32 __stdcall AIL_set_timer_user(HTIMER timer, U32 user);
extern MSS_DECLSPEC void __stdcall AIL_set_timer_period(HTIMER timer, U32 microseconds);
extern MSS_DECLSPEC void __stdcall AIL_set_timer_frequency(HTIMER timer, U32 hertz);
extern MSS_DECLSPEC void __stdcall AIL_set_timer_divisor(HTIMER timer, U32 PIT_divisor);
extern MSS_DECLSPEC void __stdcall AIL_start_timer(HTIMER timer);
extern MSS_DECLSPEC void __stdcall AIL_start_all_timers(void);
extern MSS_DECLSPEC void __stdcall AIL_stop_timer(HTIMER timer);
extern MSS_DECLSPEC void __stdcall AIL_stop_all_timers(void);
extern MSS_DECLSPEC void __stdcall AIL_release_timer_handle(HTIMER timer);
extern MSS_DECLSPEC void __stdcall AIL_release_all_timers(void);
extern MSS_DECLSPEC U32 __stdcall AIL_get_timer_highest_delay(void);
extern MSS_DECLSPEC HWND __stdcall AIL_HWND(void);
extern MSS_DECLSPEC S32 __stdcall AIL_waveOutOpen(HDIGDRIVER* drvr, LPHWAVEOUT* lphWaveOut, S32 wDeviceID, LPWAVEFORMAT lpFormat);
extern MSS_DECLSPEC void __stdcall AIL_waveOutClose(HDIGDRIVER drvr);
extern MSS_DECLSPEC S32 __stdcall AIL_digital_handle_release(HDIGDRIVER drvr);
extern MSS_DECLSPEC S32 __stdcall AIL_digital_handle_reacquire(HDIGDRIVER drvr);
extern MSS_DECLSPEC void __stdcall AIL_serve(void);
extern MSS_DECLSPEC S32 __stdcall AIL_digital_CPU_percent(HDIGDRIVER dig);
extern MSS_DECLSPEC HSAMPLE __stdcall AIL_allocate_sample_handle(HDIGDRIVER dig);
extern MSS_DECLSPEC HSAMPLE __stdcall AIL_allocate_file_sample(HDIGDRIVER dig, void* file_image, S32 block);
extern MSS_DECLSPEC void __stdcall AIL_release_sample_handle(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_init_sample(HSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_set_sample_file(HSAMPLE S, void* file_image, S32 block);
extern MSS_DECLSPEC S32 __stdcall AIL_set_named_sample_file(HSAMPLE S, C8* file_type_suffix, void* file_image, S32 file_size, S32 block);
extern MSS_DECLSPEC HPROVIDER __stdcall AIL_set_sample_processor(HSAMPLE S, SAMPLESTAGE pipeline_stage, HPROVIDER provider);
extern MSS_DECLSPEC HPROVIDER __stdcall AIL_set_digital_driver_processor(HDIGDRIVER dig, DIGDRVSTAGE pipeline_stage, HPROVIDER provider);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_adpcm_block_size(HSAMPLE S, U32 blocksize);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_address(HSAMPLE S, void* start, U32 len);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_type(HSAMPLE S, S32 format, U32 flags);
extern MSS_DECLSPEC void __stdcall AIL_start_sample(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_stop_sample(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_resume_sample(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_end_sample(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_volume(HSAMPLE S, S32 volume);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_pan(HSAMPLE S, S32 pan);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
extern MSS_DECLSPEC U32 __stdcall AIL_sample_status(HSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_playback_rate(HSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_volume(HSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_pan(HSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_loop_count(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_set_digital_master_volume(HDIGDRIVER dig, S32 master_volume);
extern MSS_DECLSPEC S32 __stdcall AIL_digital_master_volume(HDIGDRIVER dig);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_reverb(HSAMPLE S, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time);
extern MSS_DECLSPEC void __stdcall AIL_sample_reverb(HSAMPLE S, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time);
extern MSS_DECLSPEC S32 __stdcall AIL_minimum_sample_buffer_size(HDIGDRIVER dig, S32 playback_rate, S32 format);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_buffer_ready(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_load_sample_buffer(HSAMPLE S, U32 buff_num, void* buffer, U32 len);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_buffer_info(HSAMPLE S, U32* pos0, U32* len0, U32* pos1, U32* len1);
extern MSS_DECLSPEC U32 __stdcall AIL_sample_granularity(HSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_position(HSAMPLE S, U32 pos);
extern MSS_DECLSPEC U32 __stdcall AIL_sample_position(HSAMPLE S);
extern MSS_DECLSPEC AILSAMPLECB __stdcall AIL_register_SOB_callback(HSAMPLE S, AILSAMPLECB SOB);
extern MSS_DECLSPEC AILSAMPLECB __stdcall AIL_register_EOB_callback(HSAMPLE S, AILSAMPLECB EOB);
extern MSS_DECLSPEC AILSAMPLECB __stdcall AIL_register_EOS_callback(HSAMPLE S, AILSAMPLECB EOS);
extern MSS_DECLSPEC AILSAMPLECB __stdcall AIL_register_EOF_callback(HSAMPLE S, AILSAMPLECB EOFILE);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_user_data(HSAMPLE S, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall AIL_sample_user_data(HSAMPLE S, U32 index);
extern MSS_DECLSPEC S32 __stdcall AIL_active_sample_count(HDIGDRIVER dig);
extern MSS_DECLSPEC void __stdcall AIL_digital_configuration(HDIGDRIVER dig, S32* rate, S32* format, char* string);
extern MSS_DECLSPEC S32 __stdcall AIL_set_direct_buffer_control(HSAMPLE S, U32 command);
extern MSS_DECLSPEC void __stdcall AIL_get_DirectSound_info(HSAMPLE S, AILLPDIRECTSOUND* lplpDS, AILLPDIRECTSOUNDBUFFER* lplpDSB);
extern MSS_DECLSPEC S32 __stdcall AIL_set_DirectSound_HWND(HDIGDRIVER dig, HWND wnd);
extern MSS_DECLSPEC void __stdcall AIL_set_sample_ms_position(HSAMPLE S, S32 milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_sample_ms_position(HSAMPLE S, S32* total_milliseconds, S32* current_milliseconds);
extern MSS_DECLSPEC HDIGINPUT __stdcall AIL_input_open(AILINPUTINFO* info, U32 constraints, U32 callback_user_value);
extern MSS_DECLSPEC void __stdcall AIL_input_close(HDIGINPUT dig);
extern MSS_DECLSPEC AILINPUTINFO* __stdcall AIL_input_info(HDIGINPUT dig);
extern MSS_DECLSPEC S32 __stdcall AIL_set_input_state(HDIGINPUT dig, S32 enable);
extern MSS_DECLSPEC S32 __stdcall AIL_midiOutOpen(HMDIDRIVER* drvr, LPHMIDIOUT* lphMidiOut, S32 dwDeviceID);
extern MSS_DECLSPEC void __stdcall AIL_midiOutClose(HMDIDRIVER mdi);
extern MSS_DECLSPEC S32 __stdcall AIL_MIDI_handle_release(HMDIDRIVER mdi);
extern MSS_DECLSPEC S32 __stdcall AIL_MIDI_handle_reacquire(HMDIDRIVER mdi);
extern MSS_DECLSPEC HSEQUENCE __stdcall AIL_allocate_sequence_handle(HMDIDRIVER mdi);
extern MSS_DECLSPEC void __stdcall AIL_release_sequence_handle(HSEQUENCE S);
extern MSS_DECLSPEC S32 __stdcall AIL_init_sequence(HSEQUENCE S, void* start, S32 sequence_num);
extern MSS_DECLSPEC void __stdcall AIL_start_sequence(HSEQUENCE S);
extern MSS_DECLSPEC void __stdcall AIL_stop_sequence(HSEQUENCE S);
extern MSS_DECLSPEC void __stdcall AIL_resume_sequence(HSEQUENCE S);
extern MSS_DECLSPEC void __stdcall AIL_end_sequence(HSEQUENCE S);
extern MSS_DECLSPEC void __stdcall AIL_set_sequence_tempo(HSEQUENCE S, S32 tempo, S32 milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_set_sequence_volume(HSEQUENCE S, S32 volume, S32 milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_set_sequence_loop_count(HSEQUENCE S, S32 loop_count);
extern MSS_DECLSPEC U32 __stdcall AIL_sequence_status(HSEQUENCE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sequence_tempo(HSEQUENCE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sequence_volume(HSEQUENCE S);
extern MSS_DECLSPEC S32 __stdcall AIL_sequence_loop_count(HSEQUENCE S);
extern MSS_DECLSPEC void __stdcall AIL_set_XMIDI_master_volume(HMDIDRIVER mdi, S32 master_volume);
extern MSS_DECLSPEC S32 __stdcall AIL_XMIDI_master_volume(HMDIDRIVER mdi);
extern MSS_DECLSPEC S32 __stdcall AIL_active_sequence_count(HMDIDRIVER mdi);
extern MSS_DECLSPEC S32 __stdcall AIL_controller_value(HSEQUENCE S, S32 channel, S32 controller_num);
extern MSS_DECLSPEC S32 __stdcall AIL_channel_notes(HSEQUENCE S, S32 channel);
extern MSS_DECLSPEC void __stdcall AIL_sequence_position(HSEQUENCE S, S32* beat, S32* measure);
extern MSS_DECLSPEC void __stdcall AIL_branch_index(HSEQUENCE S, U32 marker);
extern MSS_DECLSPEC AILPREFIXCB __stdcall AIL_register_prefix_callback(HSEQUENCE S, AILPREFIXCB callback);
extern MSS_DECLSPEC AILTRIGGERCB __stdcall AIL_register_trigger_callback(HSEQUENCE S, AILTRIGGERCB callback);
extern MSS_DECLSPEC AILSEQUENCECB __stdcall AIL_register_sequence_callback(HSEQUENCE S, AILSEQUENCECB callback);
extern MSS_DECLSPEC AILBEATCB __stdcall AIL_register_beat_callback(HSEQUENCE S, AILBEATCB callback);
extern MSS_DECLSPEC AILEVENTCB __stdcall AIL_register_event_callback(HMDIDRIVER mdi, AILEVENTCB callback);
extern MSS_DECLSPEC AILTIMBRECB __stdcall AIL_register_timbre_callback(HMDIDRIVER mdi, AILTIMBRECB callback);
extern MSS_DECLSPEC void __stdcall AIL_set_sequence_user_data(HSEQUENCE S, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall AIL_sequence_user_data(HSEQUENCE S, U32 index);
extern MSS_DECLSPEC void __stdcall AIL_register_ICA_array(HSEQUENCE S, U8* array);
extern MSS_DECLSPEC S32 __stdcall AIL_lock_channel(HMDIDRIVER mdi);
extern MSS_DECLSPEC void __stdcall AIL_release_channel(HMDIDRIVER mdi, S32 channel);
extern MSS_DECLSPEC void __stdcall AIL_map_sequence_channel(HSEQUENCE S, S32 seq_channel, S32 new_channel);
extern MSS_DECLSPEC S32 __stdcall AIL_true_sequence_channel(HSEQUENCE S, S32 seq_channel);
extern MSS_DECLSPEC void __stdcall AIL_send_channel_voice_message(HMDIDRIVER mdi, HSEQUENCE S, S32 status, S32 data_1, S32 data_2);
extern MSS_DECLSPEC void __stdcall AIL_send_sysex_message(HMDIDRIVER mdi, void* buffer);
extern MSS_DECLSPEC HWAVESYNTH __stdcall AIL_create_wave_synthesizer(HDIGDRIVER dig, HMDIDRIVER mdi, void* wave_lib, S32 polyphony);
extern MSS_DECLSPEC void __stdcall AIL_destroy_wave_synthesizer(HWAVESYNTH W);
extern MSS_DECLSPEC void __stdcall AIL_set_sequence_ms_position(HSEQUENCE S, S32 milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_sequence_ms_position(HSEQUENCE S, S32* total_milliseconds, S32* current_milliseconds);
extern MSS_DECLSPEC HREDBOOK __stdcall AIL_redbook_open(U32 which);
extern MSS_DECLSPEC HREDBOOK __stdcall AIL_redbook_open_drive(S32 drive);
extern MSS_DECLSPEC void __stdcall AIL_redbook_close(HREDBOOK hand);
extern MSS_DECLSPEC void __stdcall AIL_redbook_eject(HREDBOOK hand);
extern MSS_DECLSPEC void __stdcall AIL_redbook_retract(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_status(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_tracks(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_track(HREDBOOK hand);
extern MSS_DECLSPEC void __stdcall AIL_redbook_track_info(HREDBOOK hand, U32 tracknum, U32* startmsec, U32* endmsec);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_id(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_position(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_play(HREDBOOK hand, U32 startmsec, U32 endmsec);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_stop(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_pause(HREDBOOK hand);
extern MSS_DECLSPEC U32 __stdcall AIL_redbook_resume(HREDBOOK hand);
extern MSS_DECLSPEC S32 __stdcall AIL_redbook_volume(HREDBOOK hand);
extern MSS_DECLSPEC S32 __stdcall AIL_redbook_set_volume(HREDBOOK hand, S32 volume);
extern MSS_DECLSPEC U32 __stdcall AIL_ms_count(void);
extern MSS_DECLSPEC U32 __stdcall AIL_us_count(void);
extern MSS_DECLSPEC HSTREAM __stdcall AIL_open_stream(HDIGDRIVER dig, char* filename, S32 stream_mem);
extern MSS_DECLSPEC void __stdcall AIL_close_stream(HSTREAM stream);
extern MSS_DECLSPEC S32 __stdcall AIL_service_stream(HSTREAM stream, S32 fillup);
extern MSS_DECLSPEC void __stdcall AIL_start_stream(HSTREAM stream);
extern MSS_DECLSPEC void __stdcall AIL_pause_stream(HSTREAM stream, S32 onoff);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_volume(HSTREAM stream, S32 volume);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_pan(HSTREAM stream, S32 pan);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_volume(HSTREAM stream);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_pan(HSTREAM stream);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_playback_rate(HSTREAM stream, S32 rate);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_playback_rate(HSTREAM stream);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_loop_count(HSTREAM stream);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_loop_count(HSTREAM stream, S32 count);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_status(HSTREAM stream);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_position(HSTREAM stream, S32 offset);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_position(HSTREAM stream);
extern MSS_DECLSPEC void __stdcall AIL_stream_info(HSTREAM stream, S32* datarate, S32* sndtype, S32* length, S32* memory);
extern MSS_DECLSPEC AILSTREAMCB __stdcall AIL_register_stream_callback(HSTREAM stream, AILSTREAMCB callback);
extern MSS_DECLSPEC void __stdcall AIL_auto_service_stream(HSTREAM stream, S32 onoff);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_user_data(HSTREAM S, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall AIL_stream_user_data(HSTREAM S, U32 index);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_stream_ms_position(HSTREAM S, S32* total_milliseconds, S32* current_milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_set_stream_reverb(HSTREAM S, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time);
extern MSS_DECLSPEC void __stdcall AIL_stream_reverb(HSTREAM S, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time);
extern MSS_DECLSPEC HDLSDEVICE __stdcall AIL_DLS_open(HMDIDRIVER mdi, HDIGDRIVER dig, char* libname, U32 flags, U32 rate, S32 bits, S32 channels);
extern MSS_DECLSPEC void __stdcall AIL_DLS_close(HDLSDEVICE dls, U32 flags);
extern MSS_DECLSPEC HDLSFILEID __stdcall AIL_DLS_load_file(HDLSDEVICE dls, char* filename, U32 flags);
extern MSS_DECLSPEC HDLSFILEID __stdcall AIL_DLS_load_memory(HDLSDEVICE dls, void* memfile, U32 flags);
extern MSS_DECLSPEC void __stdcall AIL_DLS_unload(HDLSDEVICE dls, HDLSFILEID dlsid);
extern MSS_DECLSPEC void __stdcall AIL_DLS_compact(HDLSDEVICE dls);
extern MSS_DECLSPEC void __stdcall AIL_DLS_get_info(HDLSDEVICE dls, AILDLSINFO* info, S32* PercentCPU);
extern MSS_DECLSPEC void __stdcall AIL_DLS_set_reverb(HDLSDEVICE dls, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time);
extern MSS_DECLSPEC void __stdcall AIL_DLS_get_reverb(HDLSDEVICE dls, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_startup(S32 use_digital, S32 use_MIDI, U32 output_rate, S32 output_bits, S32 output_channels);
extern MSS_DECLSPEC void __stdcall AIL_quick_shutdown(void);
extern MSS_DECLSPEC void __stdcall AIL_quick_handles(HDIGDRIVER* pdig, HMDIDRIVER* pmdi, HDLSDEVICE* pdls);
extern MSS_DECLSPEC HAUDIO __stdcall AIL_quick_load(char* filename);
extern MSS_DECLSPEC HAUDIO __stdcall AIL_quick_load_mem(void* mem, U32 size);
extern MSS_DECLSPEC HAUDIO __stdcall AIL_quick_copy(HAUDIO audio);
extern MSS_DECLSPEC void __stdcall AIL_quick_unload(HAUDIO audio);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_play(HAUDIO audio, U32 loop_count);
extern MSS_DECLSPEC void __stdcall AIL_quick_halt(HAUDIO audio);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_status(HAUDIO audio);
extern MSS_DECLSPEC HAUDIO __stdcall AIL_quick_load_and_play(char* filename, U32 loop_count, S32 wait_request);
extern MSS_DECLSPEC void __stdcall AIL_quick_set_speed(HAUDIO audio, S32 speed);
extern MSS_DECLSPEC void __stdcall AIL_quick_set_volume(HAUDIO audio, S32 volume, S32 extravol);
extern MSS_DECLSPEC void __stdcall AIL_quick_set_reverb(HAUDIO audio, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time);
extern MSS_DECLSPEC void __stdcall AIL_quick_set_ms_position(HAUDIO audio, S32 milliseconds);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_ms_position(HAUDIO audio);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_ms_length(HAUDIO audio);
extern MSS_DECLSPEC S32 __stdcall AIL_quick_type(HAUDIO audio);
extern MSS_DECLSPEC S32 __stdcall AIL_WAV_info(void* data, AILSOUNDINFO* info);
extern MSS_DECLSPEC S32 __stdcall AIL_size_processed_digital_audio(U32 dest_rate, U32 dest_format, S32 num_srcs, AILMIXINFO* src);
extern MSS_DECLSPEC S32 __stdcall AIL_process_digital_audio(void* dest_buffer, S32 dest_buffer_size, U32 dest_rate, U32 dest_format, S32 num_srcs, AILMIXINFO* src);
extern MSS_DECLSPEC S32 __stdcall AIL_compress_ASI(AILSOUNDINFO* info, char* filename_ext, void** outdata, U32* outsize, AILLENGTHYCB callback);
extern MSS_DECLSPEC S32 __stdcall AIL_decompress_ASI(void* indata, U32 insize, char* filename_ext, void** wav, U32* wavsize, AILLENGTHYCB callback);
extern MSS_DECLSPEC S32 __stdcall AIL_compress_ADPCM(AILSOUNDINFO* info, void** outdata, U32* outsize);
extern MSS_DECLSPEC S32 __stdcall AIL_decompress_ADPCM(AILSOUNDINFO* info, void** outdata, U32* outsize);
extern MSS_DECLSPEC S32 __stdcall AIL_compress_DLS(void* dls, char* compression_extension, void** mls, U32* mlssize, AILLENGTHYCB callback);
extern MSS_DECLSPEC S32 __stdcall AIL_merge_DLS_with_XMI(void* xmi, void* dls, void** mss, U32* msssize);
extern MSS_DECLSPEC S32 __stdcall AIL_extract_DLS(void* source_image, S32 source_size, void** XMI_output_data, S32* XMI_output_size, void** DLS_output_data, S32* DLS_output_size, AILLENGTHYCB callback);
extern MSS_DECLSPEC S32 __stdcall AIL_filter_DLS_with_XMI(void* xmi, void* dls, void** dlsout, U32* dlssize, S32 flags, AILLENGTHYCB callback);
extern MSS_DECLSPEC S32 __stdcall AIL_MIDI_to_XMI(void* MIDI, U32 MIDI_size, void** XMIDI, U32* XMIDI_size, S32 flags);
extern MSS_DECLSPEC S32 __stdcall AIL_list_MIDI(void* MIDI, U32 MIDI_size, char** lst, U32* lst_size, S32 flags);
extern MSS_DECLSPEC S32 __stdcall AIL_list_DLS(void* DLS, char** lst, U32* lst_size, S32 flags, C8* title);
extern MSS_DECLSPEC S32 __stdcall AIL_file_type(void* data, U32 size);
extern MSS_DECLSPEC S32 __stdcall AIL_find_DLS(void* data, U32 size, void** xmi, U32* xmisize, void** dls, U32* dlssize);
extern MSS_DECLSPEC HDIGDRIVER __stdcall AIL_primary_digital_driver(HDIGDRIVER new_primary);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_filters(HPROENUM* next, HPROVIDER* dest, C8** name);
extern MSS_DECLSPEC HDRIVERSTATE __stdcall AIL_open_filter(HPROVIDER lib, HDIGDRIVER dig);
extern MSS_DECLSPEC void __stdcall AIL_close_filter(HDRIVERSTATE filter);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_filter_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest);
extern MSS_DECLSPEC void __stdcall AIL_filter_attribute(HPROVIDER lib, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_filter_preference(HPROVIDER lib, C8* name, void* val);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_filter_sample_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest);
extern MSS_DECLSPEC void __stdcall AIL_filter_sample_attribute(HSAMPLE S, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_filter_stream_attribute(HSTREAM S, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_filter_DLS_attribute(HDLSDEVICE dls, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_filter_sample_preference(HSAMPLE S, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_filter_stream_preference(HSTREAM S, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_filter_DLS_preference(HDLSDEVICE dls, C8* name, void* val);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_3D_providers(HPROENUM* next, HPROVIDER* dest, C8** name);
extern MSS_DECLSPEC M3DRESULT __stdcall AIL_open_3D_provider(HPROVIDER lib);
extern MSS_DECLSPEC void __stdcall AIL_close_3D_provider(HPROVIDER lib);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_3D_provider_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest);
extern MSS_DECLSPEC void __stdcall AIL_3D_provider_attribute(HPROVIDER lib, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_provider_preference(HPROVIDER lib, C8* name, void* val);
extern MSS_DECLSPEC H3DSAMPLE __stdcall AIL_allocate_3D_sample_handle(HPROVIDER lib);
extern MSS_DECLSPEC void __stdcall AIL_release_3D_sample_handle(H3DSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_start_3D_sample(H3DSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_stop_3D_sample(H3DSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_resume_3D_sample(H3DSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_end_3D_sample(H3DSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_set_3D_sample_file(H3DSAMPLE S, void* file_image);
extern MSS_DECLSPEC S32 __stdcall AIL_set_3D_sample_info(H3DSAMPLE S, AILSOUNDINFO* info);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_offset(H3DSAMPLE S, U32 offset);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_playback_rate(H3DSAMPLE S, S32 playback_rate);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_loop_count(H3DSAMPLE S, U32 loops);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_loop_block(H3DSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
extern MSS_DECLSPEC U32 __stdcall AIL_3D_sample_status(H3DSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_3D_sample_volume(H3DSAMPLE S);
extern MSS_DECLSPEC U32 __stdcall AIL_3D_sample_offset(H3DSAMPLE S);
extern MSS_DECLSPEC S32 __stdcall AIL_3D_sample_playback_rate(H3DSAMPLE S);
extern MSS_DECLSPEC U32 __stdcall AIL_3D_sample_length(H3DSAMPLE S);
extern MSS_DECLSPEC U32 __stdcall AIL_3D_sample_loop_count(H3DSAMPLE S);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_distances(H3DSAMPLE S, F32 max_front_dist, F32 min_front_dist, F32 max_back_dist, F32 min_back_dist);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_float_distances(H3DSAMPLE S, F32 max_front_dist, F32 min_front_dist, F32 max_back_dist, F32 min_back_dist);
extern MSS_DECLSPEC void __stdcall AIL_3D_sample_distances(H3DSAMPLE S, F32* max_front_dist, F32* min_front_dist, F32* max_back_dist, F32* min_back_dist);
extern MSS_DECLSPEC void __stdcall AIL_3D_sample_float_distances(H3DSAMPLE S, F32* max_front_dist, F32* min_front_dist, F32* max_back_dist, F32* min_back_dist);
extern MSS_DECLSPEC S32 __stdcall AIL_active_3D_sample_count(HPROVIDER lib);
extern MSS_DECLSPEC S32 __stdcall AIL_enumerate_3D_sample_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest);
extern MSS_DECLSPEC void __stdcall AIL_3D_sample_attribute(H3DSAMPLE samp, C8* name, void* val);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_sample_preference(H3DSAMPLE samp, C8* name, void* val);
extern MSS_DECLSPEC H3DPOBJECT __stdcall AIL_open_3D_listener(HPROVIDER lib);
extern MSS_DECLSPEC void __stdcall AIL_close_3D_listener(H3DPOBJECT listener);
extern MSS_DECLSPEC H3DPOBJECT __stdcall AIL_open_3D_object(HPROVIDER lib);
extern MSS_DECLSPEC void __stdcall AIL_close_3D_object(H3DPOBJECT obj);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_position(H3DPOBJECT obj, F32 X, F32 Y, F32 Z);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_velocity(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms, F32 magnitude);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_velocity_vector(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_orientation(H3DPOBJECT obj, F32 X_face, F32 Y_face, F32 Z_face, F32 X_up, F32 Y_up, F32 Z_up);
extern MSS_DECLSPEC void __stdcall AIL_3D_position(H3DPOBJECT obj, F32* X, F32* Y, F32* Z);
extern MSS_DECLSPEC void __stdcall AIL_3D_velocity(H3DPOBJECT obj, F32* dX_per_ms, F32* dY_per_ms, F32* dZ_per_ms);
extern MSS_DECLSPEC void __stdcall AIL_3D_orientation(H3DPOBJECT obj, F32* X_face, F32* Y_face, F32* Z_face, F32* X_up, F32* Y_up, F32* Z_up);
extern MSS_DECLSPEC void __stdcall AIL_3D_update_position(H3DPOBJECT obj, F32 dt_milliseconds);
extern MSS_DECLSPEC void __stdcall AIL_3D_auto_update_position(H3DPOBJECT obj, S32 enable);
extern MSS_DECLSPEC void __stdcall AIL_set_3D_user_data(H3DPOBJECT obj, U32 index, S32 value);
extern MSS_DECLSPEC S32 __stdcall AIL_3D_user_data(H3DPOBJECT obj, U32 index);

#ifdef __cplusplus
}
#endif

#endif
