#include <mss/mss.h>

void __cdecl DLSClose(HDLSDEVICE dls, U32 flags) {}
void __cdecl DLSCompactMemory(HDLSDEVICE dls) {}
void __cdecl DLSGetInfo(HDLSDEVICE dls, AILDLSINFO FAR* info) {}
void __cdecl DLSLoadFile(HDLSDEVICE dls, char FAR* filename, U32 flags) {}
void __cdecl DLSLoadMemFile(HDLSDEVICE dls, void FAR* memfile, U32 flags) {}
HDLSDEVICE __cdecl DLSMSSOpen(HMDIDRIVER mdi, HDIGDRIVER dig, char* libname, U32 flags, U32 rate, S32 bits, S32 channels) { return NULL; }
S32 __stdcall DLSMSSGetCPU(HDLSDEVICE dls) { return 0; }
void __cdecl DLSSetAttribute(HDLSDEVICE dls, char *attr, void *value) {}
void __cdecl DLSUnloadAll(HDLSDEVICE dls) {}
void __cdecl DLSUnloadFile(HDLSDEVICE dls, HDLSFILEID dlsid) {}
HPROVIDER __cdecl RIB_alloc_provider_handle(U32 module) { return 0; }
void __cdecl RIB_free_provider_handle(HPROVIDER provider) {}
HPROVIDER __cdecl RIB_load_provider_library(C8* filename) { return 0; }
void __cdecl RIB_free_provider_library(HPROVIDER provider) {}
HPROVIDER __stdcall RIB_provider_library_handle(void) { return 0; }
RIBRESULT __cdecl RIB_register_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, const RIB_INTERFACE_ENTRY* rlist) { return 0; }
RIBRESULT __cdecl RIB_unregister_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, const RIB_INTERFACE_ENTRY* rlist) { return 0; }
RIBRESULT __cdecl RIB_request_interface(HPROVIDER provider, C8* interface_name, S32 entry_count, RIB_INTERFACE_ENTRY* rlist) { return 0; }
RIBRESULT __cdecl RIB_request_interface_entry(HPROVIDER provider, C8* interface_name, RIB_ENTRY_TYPE entry_type, C8* entry_name, U32* token) { return 0; }
S32 __cdecl RIB_enumerate_interface(HPROVIDER provider, C8* interface_name, RIB_ENTRY_TYPE type, HINTENUM* next, RIB_INTERFACE_ENTRY* dest) { return 0; }
S32 __stdcall RIB_enumerate_providers(C8* interface_name, HPROENUM* next, HPROVIDER* dest) { return 0; }
C8* __cdecl RIB_type_string(U32 data, RIB_DATA_SUBTYPE subtype) { return NULL; }
HPROVIDER __cdecl RIB_find_file_provider(C8* interface_name, C8* attribute_name, C8* file_suffix) { return 0; }
HPROVIDER __stdcall RIB_find_provider(C8* interface_name, C8* attribute_name, C8* attribute_value) { return 0; }
S32 __stdcall RIB_load_application_providers(C8* filespec) { return 0; }
void __stdcall RIB_set_provider_user_data(HPROVIDER provider, U32 index, S32 value) {}
S32 __stdcall RIB_provider_user_data(HPROVIDER provider, U32 index) { return 0; }
void __stdcall RIB_set_provider_system_data(HPROVIDER provider, U32 index, S32 value) {}
S32 __stdcall RIB_provider_system_data(HPROVIDER provider, U32 index) { return 0; }
C8* __cdecl RIB_error(void) { return NULL; }
void* __stdcall AIL_mem_alloc_lock(U32 size) { return NULL; }
void __stdcall AIL_mem_free_lock(void* ptr) {}
S32 __stdcall AIL_file_error(void) { return 0; }
S32 __stdcall AIL_file_size(char* filename) { return 0; }
void* __stdcall AIL_file_read(char* filename, void* dest) { return NULL; }
S32 __stdcall AIL_file_write(char* filename, void* buf, U32 len) { return 0; }
S32 __stdcall AIL_WAV_file_write(char* filename, void* buf, U32 len, S32 rate, S32 format) { return 0; }
S32 __stdcall AIL_startup(void) { return 0; }
S32 __stdcall AIL_get_preference(U32 number) { return 0; }
void __stdcall AIL_shutdown(void) {}
S32 __stdcall AIL_set_preference(U32 number, S32 value) { return 0; }
char* __stdcall AIL_last_error(void) { return NULL; }
void __stdcall AIL_set_error(char* error_msg) {}
void __cdecl AIL_debug_printf(C8* fmt, ...) {}
void __cdecl AIL_sprintf(C8* s, C8* fmt, ...) {}
U32 __stdcall AIL_MMX_available(void) { return 0; }
void __stdcall AIL_lock(void) {}
void __stdcall AIL_unlock(void) {}
void __stdcall AIL_delay(S32 intervals) {}
S32 __stdcall AIL_background(void) { return 0; }
HTIMER __stdcall AIL_register_timer(AILTIMERCB fn) { return 0; }
U32 __stdcall AIL_set_timer_user(HTIMER timer, U32 user) { return 0; }
void __stdcall AIL_set_timer_period(HTIMER timer, U32 microseconds) {}
void __stdcall AIL_set_timer_frequency(HTIMER timer, U32 hertz) {}
void __stdcall AIL_set_timer_divisor(HTIMER timer, U32 PIT_divisor) {}
void __stdcall AIL_start_timer(HTIMER timer) {}
void __stdcall AIL_start_all_timers(void) {}
void __stdcall AIL_stop_timer(HTIMER timer) {}
void __stdcall AIL_stop_all_timers(void) {}
void __stdcall AIL_release_timer_handle(HTIMER timer) {}
void __stdcall AIL_release_all_timers(void) {}
U32 __stdcall AIL_get_timer_highest_delay(void) { return 0; }
HWND __stdcall AIL_HWND(void) { return NULL; }
S32 __stdcall AIL_waveOutOpen(HDIGDRIVER* drvr, LPHWAVEOUT* lphWaveOut, S32 wDeviceID, LPWAVEFORMAT lpFormat) { return 0; }
void __stdcall AIL_waveOutClose(HDIGDRIVER drvr) {}
S32 __stdcall AIL_digital_handle_release(HDIGDRIVER drvr) { return 0; }
S32 __stdcall AIL_digital_handle_reacquire(HDIGDRIVER drvr) { return 0; }
void __stdcall AIL_serve(void) {}
S32 __stdcall AIL_digital_CPU_percent(HDIGDRIVER dig) { return 0; }
HSAMPLE __stdcall AIL_allocate_sample_handle(HDIGDRIVER dig) { return NULL; }
HSAMPLE __stdcall AIL_allocate_file_sample(HDIGDRIVER dig, void* file_image, S32 block) { return NULL; }
void __stdcall AIL_release_sample_handle(HSAMPLE S) {}
void __stdcall AIL_init_sample(HSAMPLE S) {}
S32 __stdcall AIL_set_sample_file(HSAMPLE S, void* file_image, S32 block) { return 0; }
S32 __stdcall AIL_set_named_sample_file(HSAMPLE S, C8* file_type_suffix, void* file_image, S32 file_size, S32 block) { return 0; }
HPROVIDER __stdcall AIL_set_sample_processor(HSAMPLE S, SAMPLESTAGE pipeline_stage, HPROVIDER provider) { return 0; }
HPROVIDER __stdcall AIL_set_digital_driver_processor(HDIGDRIVER dig, DIGDRVSTAGE pipeline_stage, HPROVIDER provider) { return 0; }
void __stdcall AIL_set_sample_adpcm_block_size(HSAMPLE S, U32 blocksize) {}
void __stdcall AIL_set_sample_address(HSAMPLE S, void* start, U32 len) {}
void __stdcall AIL_set_sample_type(HSAMPLE S, S32 format, U32 flags) {}
void __stdcall AIL_start_sample(HSAMPLE S) {}
void __stdcall AIL_stop_sample(HSAMPLE S) {}
void __stdcall AIL_resume_sample(HSAMPLE S) {}
void __stdcall AIL_end_sample(HSAMPLE S) {}
void __stdcall AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate) {}
void __stdcall AIL_set_sample_volume(HSAMPLE S, S32 volume) {}
void __stdcall AIL_set_sample_pan(HSAMPLE S, S32 pan) {}
void __stdcall AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count) {}
void __stdcall AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset, S32 loop_end_offset) {}
U32 __stdcall AIL_sample_status(HSAMPLE S) { return 0; }
S32 __stdcall AIL_sample_playback_rate(HSAMPLE S) { return 0; }
S32 __stdcall AIL_sample_volume(HSAMPLE S) { return 0; }
S32 __stdcall AIL_sample_pan(HSAMPLE S) { return 0; }
S32 __stdcall AIL_sample_loop_count(HSAMPLE S) { return 0; }
void __stdcall AIL_set_digital_master_volume(HDIGDRIVER dig, S32 master_volume) {}
S32 __stdcall AIL_digital_master_volume(HDIGDRIVER dig) { return 0; }
void __stdcall AIL_set_sample_reverb(HSAMPLE S, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time) {}
void __stdcall AIL_sample_reverb(HSAMPLE S, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time) {}
S32 __stdcall AIL_minimum_sample_buffer_size(HDIGDRIVER dig, S32 playback_rate, S32 format) { return 0; }
S32 __stdcall AIL_sample_buffer_ready(HSAMPLE S) { return 0; }
void __stdcall AIL_load_sample_buffer(HSAMPLE S, U32 buff_num, void* buffer, U32 len) {}
S32 __stdcall AIL_sample_buffer_info(HSAMPLE S, U32* pos0, U32* len0, U32* pos1, U32* len1) { return 0; }
U32 __stdcall AIL_sample_granularity(HSAMPLE S) { return 0; }
void __stdcall AIL_set_sample_position(HSAMPLE S, U32 pos) {}
U32 __stdcall AIL_sample_position(HSAMPLE S) { return 0; }
AILSAMPLECB __stdcall AIL_register_SOB_callback(HSAMPLE S, AILSAMPLECB SOB) { return NULL; }
AILSAMPLECB __stdcall AIL_register_EOB_callback(HSAMPLE S, AILSAMPLECB EOB) { return NULL; }
AILSAMPLECB __stdcall AIL_register_EOS_callback(HSAMPLE S, AILSAMPLECB EOS) { return NULL; }
AILSAMPLECB __stdcall AIL_register_EOF_callback(HSAMPLE S, AILSAMPLECB EOFILE) { return NULL; }
void __stdcall AIL_set_sample_user_data(HSAMPLE S, U32 index, S32 value) {}
S32 __stdcall AIL_sample_user_data(HSAMPLE S, U32 index) { return 0; }
S32 __stdcall AIL_active_sample_count(HDIGDRIVER dig) { return 0; }
void __stdcall AIL_digital_configuration(HDIGDRIVER dig, S32* rate, S32* format, char* string) {}
S32 __stdcall AIL_set_direct_buffer_control(HSAMPLE S, U32 command) { return 0; }
void __stdcall AIL_get_DirectSound_info(HSAMPLE S, AILLPDIRECTSOUND* lplpDS, AILLPDIRECTSOUNDBUFFER* lplpDSB) {}
S32 __stdcall AIL_set_DirectSound_HWND(HDIGDRIVER dig, HWND wnd) { return 0; }
void __stdcall AIL_set_sample_ms_position(HSAMPLE S, S32 milliseconds) {}
void __stdcall AIL_sample_ms_position(HSAMPLE S, S32* total_milliseconds, S32* current_milliseconds) {}
HDIGINPUT __stdcall AIL_input_open(AILINPUTINFO* info, U32 constraints, U32 callback_user_value) { return NULL; }
void __stdcall AIL_input_close(HDIGINPUT dig) {}
AILINPUTINFO* __stdcall AIL_input_info(HDIGINPUT dig) { return NULL; }
S32 __stdcall AIL_set_input_state(HDIGINPUT dig, S32 enable) { return 0; }
S32 __stdcall AIL_midiOutOpen(HMDIDRIVER* drvr, LPHMIDIOUT* lphMidiOut, S32 dwDeviceID) { return 0; }
void __stdcall AIL_midiOutClose(HMDIDRIVER mdi) {}
S32 __stdcall AIL_MIDI_handle_release(HMDIDRIVER mdi) { return 0; }
S32 __stdcall AIL_MIDI_handle_reacquire(HMDIDRIVER mdi) { return 0; }
HSEQUENCE __stdcall AIL_allocate_sequence_handle(HMDIDRIVER mdi) { return NULL; }
void __stdcall AIL_release_sequence_handle(HSEQUENCE S) {}
S32 __stdcall AIL_init_sequence(HSEQUENCE S, void* start, S32 sequence_num) { return 0; }
void __stdcall AIL_start_sequence(HSEQUENCE S) {}
void __stdcall AIL_stop_sequence(HSEQUENCE S) {}
void __stdcall AIL_resume_sequence(HSEQUENCE S) {}
void __stdcall AIL_end_sequence(HSEQUENCE S) {}
void __stdcall AIL_set_sequence_tempo(HSEQUENCE S, S32 tempo, S32 milliseconds) {}
void __stdcall AIL_set_sequence_volume(HSEQUENCE S, S32 volume, S32 milliseconds) {}
void __stdcall AIL_set_sequence_loop_count(HSEQUENCE S, S32 loop_count) {}
U32 __stdcall AIL_sequence_status(HSEQUENCE S) { return 0; }
S32 __stdcall AIL_sequence_tempo(HSEQUENCE S) { return 0; }
S32 __stdcall AIL_sequence_volume(HSEQUENCE S) { return 0; }
S32 __stdcall AIL_sequence_loop_count(HSEQUENCE S) { return 0; }
void __stdcall AIL_set_XMIDI_master_volume(HMDIDRIVER mdi, S32 master_volume) {}
S32 __stdcall AIL_XMIDI_master_volume(HMDIDRIVER mdi) { return 0; }
S32 __stdcall AIL_active_sequence_count(HMDIDRIVER mdi) { return 0; }
S32 __stdcall AIL_controller_value(HSEQUENCE S, S32 channel, S32 controller_num) { return 0; }
S32 __stdcall AIL_channel_notes(HSEQUENCE S, S32 channel) { return 0; }
void __stdcall AIL_sequence_position(HSEQUENCE S, S32* beat, S32* measure) {}
void __stdcall AIL_branch_index(HSEQUENCE S, U32 marker) {}
AILPREFIXCB __stdcall AIL_register_prefix_callback(HSEQUENCE S, AILPREFIXCB callback) { return NULL; }
AILTRIGGERCB __stdcall AIL_register_trigger_callback(HSEQUENCE S, AILTRIGGERCB callback) { return NULL; }
AILSEQUENCECB __stdcall AIL_register_sequence_callback(HSEQUENCE S, AILSEQUENCECB callback) { return NULL; }
AILBEATCB __stdcall AIL_register_beat_callback(HSEQUENCE S, AILBEATCB callback) { return NULL; }
AILEVENTCB __stdcall AIL_register_event_callback(HMDIDRIVER mdi, AILEVENTCB callback) { return NULL; }
AILTIMBRECB __stdcall AIL_register_timbre_callback(HMDIDRIVER mdi, AILTIMBRECB callback) { return NULL; }
void __stdcall AIL_set_sequence_user_data(HSEQUENCE S, U32 index, S32 value) {}
S32 __stdcall AIL_sequence_user_data(HSEQUENCE S, U32 index) { return 0; }
void __stdcall AIL_register_ICA_array(HSEQUENCE S, U8* array) {}
S32 __stdcall AIL_lock_channel(HMDIDRIVER mdi) { return 0; }
void __stdcall AIL_release_channel(HMDIDRIVER mdi, S32 channel) {}
void __stdcall AIL_map_sequence_channel(HSEQUENCE S, S32 seq_channel, S32 new_channel) {}
S32 __stdcall AIL_true_sequence_channel(HSEQUENCE S, S32 seq_channel) { return 0; }
void __stdcall AIL_send_channel_voice_message(HMDIDRIVER mdi, HSEQUENCE S, S32 status, S32 data_1, S32 data_2) {}
void __stdcall AIL_send_sysex_message(HMDIDRIVER mdi, void* buffer) {}
HWAVESYNTH __stdcall AIL_create_wave_synthesizer(HDIGDRIVER dig, HMDIDRIVER mdi, void* wave_lib, S32 polyphony) { return NULL; }
void __stdcall AIL_destroy_wave_synthesizer(HWAVESYNTH W) {}
void __stdcall AIL_set_sequence_ms_position(HSEQUENCE S, S32 milliseconds) {}
void __stdcall AIL_sequence_ms_position(HSEQUENCE S, S32* total_milliseconds, S32* current_milliseconds) {}
HREDBOOK __stdcall AIL_redbook_open(U32 which) { return NULL; }
HREDBOOK __stdcall AIL_redbook_open_drive(S32 drive) { return NULL; }
void __stdcall AIL_redbook_close(HREDBOOK hand) {}
void __stdcall AIL_redbook_eject(HREDBOOK hand) {}
void __stdcall AIL_redbook_retract(HREDBOOK hand) {}
U32 __stdcall AIL_redbook_status(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_tracks(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_track(HREDBOOK hand) { return 0; }
void __stdcall AIL_redbook_track_info(HREDBOOK hand, U32 tracknum, U32* startmsec, U32* endmsec) {}
U32 __stdcall AIL_redbook_id(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_position(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_play(HREDBOOK hand, U32 startmsec, U32 endmsec) { return 0; }
U32 __stdcall AIL_redbook_stop(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_pause(HREDBOOK hand) { return 0; }
U32 __stdcall AIL_redbook_resume(HREDBOOK hand) { return 0; }
S32 __stdcall AIL_redbook_volume(HREDBOOK hand) { return 0; }
S32 __stdcall AIL_redbook_set_volume(HREDBOOK hand, S32 volume) { return 0; }
U32 __stdcall AIL_ms_count(void) { return 0; }
U32 __stdcall AIL_us_count(void) { return 0; }
HSTREAM __stdcall AIL_open_stream(HDIGDRIVER dig, char* filename, S32 stream_mem) { return NULL; }
void __stdcall AIL_close_stream(HSTREAM stream) {}
S32 __stdcall AIL_service_stream(HSTREAM stream, S32 fillup) { return 0; }
void __stdcall AIL_start_stream(HSTREAM stream) {}
void __stdcall AIL_pause_stream(HSTREAM stream, S32 onoff) {}
void __stdcall AIL_set_stream_volume(HSTREAM stream, S32 volume) {}
void __stdcall AIL_set_stream_pan(HSTREAM stream, S32 pan) {}
S32 __stdcall AIL_stream_volume(HSTREAM stream) { return 0; }
S32 __stdcall AIL_stream_pan(HSTREAM stream) { return 0; }
void __stdcall AIL_set_stream_playback_rate(HSTREAM stream, S32 rate) {}
S32 __stdcall AIL_stream_playback_rate(HSTREAM stream) { return 0; }
S32 __stdcall AIL_stream_loop_count(HSTREAM stream) { return 0; }
void __stdcall AIL_set_stream_loop_count(HSTREAM stream, S32 count) {}
S32 __stdcall AIL_stream_status(HSTREAM stream) { return 0; }
void __stdcall AIL_set_stream_position(HSTREAM stream, S32 offset) {}
S32 __stdcall AIL_stream_position(HSTREAM stream) { return 0; }
void __stdcall AIL_stream_info(HSTREAM stream, S32* datarate, S32* sndtype, S32* length, S32* memory) {}
AILSTREAMCB __stdcall AIL_register_stream_callback(HSTREAM stream, AILSTREAMCB callback) { return NULL; }
void __stdcall AIL_auto_service_stream(HSTREAM stream, S32 onoff) {}
void __stdcall AIL_set_stream_user_data(HSTREAM S, U32 index, S32 value) {}
S32 __stdcall AIL_stream_user_data(HSTREAM S, U32 index) { return 0; }
void __stdcall AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds) {}
void __stdcall AIL_stream_ms_position(HSTREAM S, S32* total_milliseconds, S32* current_milliseconds) {}
void __stdcall AIL_set_stream_reverb(HSTREAM S, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time) {}
void __stdcall AIL_stream_reverb(HSTREAM S, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time) {}
HDLSDEVICE __stdcall AIL_DLS_open(HMDIDRIVER mdi, HDIGDRIVER dig, char* libname, U32 flags, U32 rate, S32 bits, S32 channels) { return NULL; }
void __stdcall AIL_DLS_close(HDLSDEVICE dls, U32 flags) {}
HDLSFILEID __stdcall AIL_DLS_load_file(HDLSDEVICE dls, char* filename, U32 flags) { return NULL; }
HDLSFILEID __stdcall AIL_DLS_load_memory(HDLSDEVICE dls, void* memfile, U32 flags) { return NULL; }
void __stdcall AIL_DLS_unload(HDLSDEVICE dls, HDLSFILEID dlsid) {}
void __stdcall AIL_DLS_compact(HDLSDEVICE dls) {}
void __stdcall AIL_DLS_get_info(HDLSDEVICE dls, AILDLSINFO* info, S32* PercentCPU) {}
void __stdcall AIL_DLS_set_reverb(HDLSDEVICE dls, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time) {}
void __stdcall AIL_DLS_get_reverb(HDLSDEVICE dls, F32* reverb_level, F32* reverb_reflect_time, F32* reverb_decay_time) {}
S32 __stdcall AIL_quick_startup(S32 use_digital, S32 use_MIDI, U32 output_rate, S32 output_bits, S32 output_channels) { return 0; }
void __stdcall AIL_quick_shutdown(void) {}
void __stdcall AIL_quick_handles(HDIGDRIVER* pdig, HMDIDRIVER* pmdi, HDLSDEVICE* pdls) {}
HAUDIO __stdcall AIL_quick_load(char* filename) { return NULL; }
HAUDIO __stdcall AIL_quick_load_mem(void* mem, U32 size) { return NULL; }
HAUDIO __stdcall AIL_quick_copy(HAUDIO audio) { return NULL; }
void __stdcall AIL_quick_unload(HAUDIO audio) {}
S32 __stdcall AIL_quick_play(HAUDIO audio, U32 loop_count) { return 0; }
void __stdcall AIL_quick_halt(HAUDIO audio) {}
S32 __stdcall AIL_quick_status(HAUDIO audio) { return 0; }
HAUDIO __stdcall AIL_quick_load_and_play(char* filename, U32 loop_count, S32 wait_request) { return NULL; }
void __stdcall AIL_quick_set_speed(HAUDIO audio, S32 speed) {}
void __stdcall AIL_quick_set_volume(HAUDIO audio, S32 volume, S32 extravol) {}
void __stdcall AIL_quick_set_reverb(HAUDIO audio, F32 reverb_level, F32 reverb_reflect_time, F32 reverb_decay_time) {}
void __stdcall AIL_quick_set_ms_position(HAUDIO audio, S32 milliseconds) {}
S32 __stdcall AIL_quick_ms_position(HAUDIO audio) { return 0; }
S32 __stdcall AIL_quick_ms_length(HAUDIO audio) { return 0; }
S32 __stdcall AIL_quick_type(HAUDIO audio) { return 0; }
S32 __stdcall AIL_WAV_info(void* data, AILSOUNDINFO* info) { return 0; }
S32 __stdcall AIL_size_processed_digital_audio(U32 dest_rate, U32 dest_format, S32 num_srcs, AILMIXINFO* src) { return 0; }
S32 __stdcall AIL_process_digital_audio(void* dest_buffer, S32 dest_buffer_size, U32 dest_rate, U32 dest_format, S32 num_srcs, AILMIXINFO* src) { return 0; }
S32 __stdcall AIL_compress_ASI(AILSOUNDINFO* info, char* filename_ext, void** outdata, U32* outsize, AILLENGTHYCB callback) { return 0; }
S32 __stdcall AIL_decompress_ASI(void* indata, U32 insize, char* filename_ext, void** wav, U32* wavsize, AILLENGTHYCB callback) { return 0; }
S32 __stdcall AIL_compress_ADPCM(AILSOUNDINFO* info, void** outdata, U32* outsize) { return 0; }
S32 __stdcall AIL_decompress_ADPCM(AILSOUNDINFO* info, void** outdata, U32* outsize) { return 0; }
S32 __stdcall AIL_compress_DLS(void* dls, char* compression_extension, void** mls, U32* mlssize, AILLENGTHYCB callback) { return 0; }
S32 __stdcall AIL_merge_DLS_with_XMI(void* xmi, void* dls, void** mss, U32* msssize) { return 0; }
S32 __stdcall AIL_extract_DLS(void* source_image, S32 source_size, void** XMI_output_data, S32* XMI_output_size, void** DLS_output_data, S32* DLS_output_size, AILLENGTHYCB callback) { return 0; }
S32 __stdcall AIL_filter_DLS_with_XMI(void* xmi, void* dls, void** dlsout, U32* dlssize, S32 flags, AILLENGTHYCB callback) { return 0; }
S32 __stdcall AIL_MIDI_to_XMI(void* MIDI, U32 MIDI_size, void** XMIDI, U32* XMIDI_size, S32 flags) { return 0; }
S32 __stdcall AIL_list_MIDI(void* MIDI, U32 MIDI_size, char** lst, U32* lst_size, S32 flags) { return 0; }
S32 __stdcall AIL_list_DLS(void* DLS, char** lst, U32* lst_size, S32 flags, C8* title) { return 0; }
S32 __stdcall AIL_file_type(void* data, U32 size) { return 0; }
S32 __stdcall AIL_find_DLS(void* data, U32 size, void** xmi, U32* xmisize, void** dls, U32* dlssize) { return 0; }
HDIGDRIVER __stdcall AIL_primary_digital_driver(HDIGDRIVER new_primary) { return NULL; }
S32 __stdcall AIL_enumerate_filters(HPROENUM* next, HPROVIDER* dest, C8** name) { return 0; }
HDRIVERSTATE __stdcall AIL_open_filter(HPROVIDER lib, HDIGDRIVER dig) { return 0; }
void __stdcall AIL_close_filter(HDRIVERSTATE filter) {}
S32 __stdcall AIL_enumerate_filter_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest) { return 0; }
void __stdcall AIL_filter_attribute(HPROVIDER lib, C8* name, void* val) {}
void __stdcall AIL_set_filter_preference(HPROVIDER lib, C8* name, void* val) {}
S32 __stdcall AIL_enumerate_filter_sample_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest) { return 0; }
void __stdcall AIL_filter_sample_attribute(HSAMPLE S, C8* name, void* val) {}
void __stdcall AIL_filter_stream_attribute(HSTREAM S, C8* name, void* val) {}
void __stdcall AIL_filter_DLS_attribute(HDLSDEVICE dls, C8* name, void* val) {}
void __stdcall AIL_set_filter_sample_preference(HSAMPLE S, C8* name, void* val) {}
void __stdcall AIL_set_filter_stream_preference(HSTREAM S, C8* name, void* val) {}
void __stdcall AIL_set_filter_DLS_preference(HDLSDEVICE dls, C8* name, void* val) {}
S32 __stdcall AIL_enumerate_3D_providers(HPROENUM* next, HPROVIDER* dest, C8** name) { return 0; }
M3DRESULT __stdcall AIL_open_3D_provider(HPROVIDER lib) { return 0; }
void __stdcall AIL_close_3D_provider(HPROVIDER lib) {}
S32 __stdcall AIL_enumerate_3D_provider_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest) { return 0; }
void __stdcall AIL_3D_provider_attribute(HPROVIDER lib, C8* name, void* val) {}
void __stdcall AIL_set_3D_provider_preference(HPROVIDER lib, C8* name, void* val) {}
H3DSAMPLE __stdcall AIL_allocate_3D_sample_handle(HPROVIDER lib) { return NULL; }
void __stdcall AIL_release_3D_sample_handle(H3DSAMPLE S) {}
void __stdcall AIL_start_3D_sample(H3DSAMPLE S) {}
void __stdcall AIL_stop_3D_sample(H3DSAMPLE S) {}
void __stdcall AIL_resume_3D_sample(H3DSAMPLE S) {}
void __stdcall AIL_end_3D_sample(H3DSAMPLE S) {}
S32 __stdcall AIL_set_3D_sample_file(H3DSAMPLE S, void* file_image) { return 0; }
S32 __stdcall AIL_set_3D_sample_info(H3DSAMPLE S, AILSOUNDINFO* info) { return 0; }
void __stdcall AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume) {}
void __stdcall AIL_set_3D_sample_offset(H3DSAMPLE S, U32 offset) {}
void __stdcall AIL_set_3D_sample_playback_rate(H3DSAMPLE S, S32 playback_rate) {}
void __stdcall AIL_set_3D_sample_loop_count(H3DSAMPLE S, U32 loops) {}
void __stdcall AIL_set_3D_sample_loop_block(H3DSAMPLE S, S32 loop_start_offset, S32 loop_end_offset) {}
U32 __stdcall AIL_3D_sample_status(H3DSAMPLE S) { return 0; }
S32 __stdcall AIL_3D_sample_volume(H3DSAMPLE S) { return 0; }
U32 __stdcall AIL_3D_sample_offset(H3DSAMPLE S) { return 0; }
S32 __stdcall AIL_3D_sample_playback_rate(H3DSAMPLE S) { return 0; }
U32 __stdcall AIL_3D_sample_length(H3DSAMPLE S) { return 0; }
U32 __stdcall AIL_3D_sample_loop_count(H3DSAMPLE S) { return 0; }
void __stdcall AIL_set_3D_sample_distances(H3DSAMPLE S, F32 max_front_dist, F32 min_front_dist, F32 max_back_dist, F32 min_back_dist) {}
void __stdcall AIL_set_3D_sample_float_distances(H3DSAMPLE S, F32 max_front_dist, F32 min_front_dist, F32 max_back_dist, F32 min_back_dist) {}
void __stdcall AIL_3D_sample_distances(H3DSAMPLE S, F32* max_front_dist, F32* min_front_dist, F32* max_back_dist, F32* min_back_dist) {}
void __stdcall AIL_3D_sample_float_distances(H3DSAMPLE S, F32* max_front_dist, F32* min_front_dist, F32* max_back_dist, F32* min_back_dist) {}
S32 __stdcall AIL_active_3D_sample_count(HPROVIDER lib) { return 0; }
S32 __stdcall AIL_enumerate_3D_sample_attributes(HPROVIDER lib, HINTENUM* next, RIB_INTERFACE_ENTRY* dest) { return 0; }
void __stdcall AIL_3D_sample_attribute(H3DSAMPLE samp, C8* name, void* val) {}
void __stdcall AIL_set_3D_sample_preference(H3DSAMPLE samp, C8* name, void* val) {}
H3DPOBJECT __stdcall AIL_open_3D_listener(HPROVIDER lib) { return NULL; }
void __stdcall AIL_close_3D_listener(H3DPOBJECT listener) {}
H3DPOBJECT __stdcall AIL_open_3D_object(HPROVIDER lib) { return NULL; }
void __stdcall AIL_close_3D_object(H3DPOBJECT obj) {}
void __stdcall AIL_set_3D_position(H3DPOBJECT obj, F32 X, F32 Y, F32 Z) {}
void __stdcall AIL_set_3D_velocity(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms, F32 magnitude) {}
void __stdcall AIL_set_3D_velocity_vector(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms) {}
void __stdcall AIL_set_3D_orientation(H3DPOBJECT obj, F32 X_face, F32 Y_face, F32 Z_face, F32 X_up, F32 Y_up, F32 Z_up) {}
void __stdcall AIL_3D_position(H3DPOBJECT obj, F32* X, F32* Y, F32* Z) {}
void __stdcall AIL_3D_velocity(H3DPOBJECT obj, F32* dX_per_ms, F32* dY_per_ms, F32* dZ_per_ms) {}
void __stdcall AIL_3D_orientation(H3DPOBJECT obj, F32* X_face, F32* Y_face, F32* Z_face, F32* X_up, F32* Y_up, F32* Z_up) {}
void __stdcall AIL_3D_update_position(H3DPOBJECT obj, F32 dt_milliseconds) {}
void __stdcall AIL_3D_auto_update_position(H3DPOBJECT obj, S32 enable) {}
void __stdcall AIL_set_3D_user_data(H3DPOBJECT obj, U32 index, S32 value) {}
S32 __stdcall AIL_3D_user_data(H3DPOBJECT obj, U32 index) { return 0; }

extern __declspec(dllexport) BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved) {
    return TRUE;
}
