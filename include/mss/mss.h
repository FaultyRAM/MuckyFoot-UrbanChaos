#ifndef MSS_H
#define MSS_H

#include <windows.h>

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

typedef struct MssSample *HSAMPLE;
struct MssSample;

typedef struct MssStream *HSTREAM;
struct MssStream;

typedef struct MssProvider *HPROVIDER;
struct MssProvider;

typedef struct Mss3dPObject *H3DPOBJECT;
typedef struct Mss3dPObject *H3DSAMPLE;
struct Mss3dPObject;

typedef struct MssDigDriver *HDIGDRIVER;
struct MssDigDriver;

typedef struct MssMdiDriver *HMDIDRIVER;
struct MssMdiDriver;

typedef struct MssDlsDevice *HDLSDEVICE;
struct MssDlsDevice;

extern void *WINAPI AIL_mem_alloc_lock(U32);
extern void WINAPI AIL_mem_free_lock(void *);

extern S32 WINAPI AIL_file_size(char *);
extern void *WINAPI AIL_file_read(char *, void *);

extern S32 WINAPI AIL_WAV_info(void *, AILSOUNDINFO *);
extern S32 WINAPI AIL_decompress_ADPCM(AILSOUNDINFO *, void **, U32 *);

extern S32 WINAPI AIL_set_preference(U32, S32);
extern S32 WINAPI AIL_quick_startup(S32, S32, U32, S32, S32);
extern void WINAPI AIL_quick_handles(HDIGDRIVER *, HMDIDRIVER *, HDLSDEVICE *);
extern void WINAPI AIL_quick_shutdown(void);

extern HSAMPLE WINAPI AIL_allocate_file_sample(HDIGDRIVER, void *, S32);
extern U32 WINAPI AIL_sample_status(HSAMPLE);
extern U32 WINAPI AIL_sample_position(HSAMPLE);
extern void WINAPI AIL_set_sample_volume(HSAMPLE, S32);
extern void WINAPI AIL_set_sample_loop_count(HSAMPLE, S32);
extern void WINAPI AIL_set_sample_playback_rate(HSAMPLE, S32);
extern void WINAPI AIL_start_sample(HSAMPLE);
extern void WINAPI AIL_release_sample_handle(HSAMPLE);

extern HSTREAM WINAPI AIL_open_stream(HDIGDRIVER, C8 *, S32);
extern S32 WINAPI AIL_stream_status(HSTREAM);
extern S32 WINAPI AIL_stream_position(HSTREAM);
extern void WINAPI AIL_set_stream_volume(HSTREAM, S32);
extern void WINAPI AIL_set_stream_loop_count(HSTREAM, S32);
extern void WINAPI AIL_set_stream_playback_rate(HSTREAM, S32);
extern void WINAPI AIL_start_stream(HSTREAM);
extern void WINAPI AIL_close_stream(HSTREAM);

extern void WINAPI AIL_set_3D_provider_preference(HPROVIDER, C8 *, void *);
extern S32 WINAPI AIL_enumerate_3D_providers(HPROENUM *, HPROVIDER *, C8 **);
extern M3DRESULT WINAPI AIL_open_3D_provider(HPROVIDER);
extern void WINAPI AIL_close_3D_provider(HPROVIDER);

extern H3DPOBJECT WINAPI AIL_open_3D_listener(HPROVIDER);
extern void WINAPI AIL_set_3D_position(H3DPOBJECT, F32, F32, F32);
extern void WINAPI AIL_set_3D_orientation(H3DPOBJECT, F32, F32, F32, F32, F32, F32);
extern void WINAPI AIL_close_3D_listener(H3DPOBJECT);

extern H3DSAMPLE WINAPI AIL_allocate_3D_sample_handle(HPROVIDER);
extern U32 WINAPI AIL_3D_sample_status(H3DSAMPLE);
extern U32 WINAPI AIL_3D_sample_offset(H3DSAMPLE);
extern void WINAPI AIL_set_3D_sample_preference(H3DSAMPLE, C8 *, void *);
extern S32 WINAPI AIL_set_3D_sample_file(H3DSAMPLE, void *);
extern S32 WINAPI AIL_set_3D_sample_volume(H3DSAMPLE, S32);
extern void WINAPI AIL_set_3D_sample_loop_count(H3DSAMPLE, U32);
extern void WINAPI AIL_set_3D_sample_float_distances(H3DSAMPLE, F32, F32, F32, F32);
extern void WINAPI AIL_set_3D_sample_playback_rate(H3DSAMPLE, S32);
extern void WINAPI AIL_start_3D_sample(H3DSAMPLE);
extern void WINAPI AIL_release_3D_sample_handle(H3DSAMPLE);

inline void WINAPI AIL_set_3D_sample_distances(H3DSAMPLE a, F32 b, F32 c, F32 d, F32 e) {
    AIL_set_3D_sample_float_distances(a, b, c, d, e);
}

#ifdef __cplusplus
}
#endif

#endif
