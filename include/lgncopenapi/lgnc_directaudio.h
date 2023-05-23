#pragma once

#ifdef __cplusplus
extern "C" {
#endif

enum LGNC_ADEC_FMT_T
{
    LGNC_ADEC_FMT_UNKNOWN = 0,
    LGNC_ADEC_FMT_PCM = 1,
    LGNC_ADEC_FMT_AC3 = 2,
    LGNC_ADEC_FMT_AAC = 5,
    LGNC_ADEC_FMT_MP3 = 8,
    LGNC_ADEC_FMT_NONE = 10
};

typedef enum LGNC_ADEC_FMT_T LGNC_ADEC_FMT_T;

enum LGNC_ADEC_CH_INDEX_T
{
    LGNC_ADEC_CH_INDEX_MAIN = 0,
    LGNC_ADEC_CH_INDEX_BUF0 = 1
};

typedef enum LGNC_ADEC_CH_INDEX_T LGNC_ADEC_CH_INDEX_T;

enum LGNC_ADEC_SAMPLING_FREQ_T
{
    LGNC_ADEC_SAMPLING_FREQ_4_KHZ = 4,
    LGNC_ADEC_SAMPLING_FREQ_8_KHZ = 8,
    LGNC_ADEC_SAMPLING_FREQ_11_025KHZ = 11,
    LGNC_ADEC_SAMPLING_FREQ_12_KHZ = 12,
    LGNC_ADEC_SAMPLING_FREQ_16_KHZ = 16,
    LGNC_ADEC_SAMPLING_FREQ_22_05KHZ = 22,
    LGNC_ADEC_SAMPLING_FREQ_24_KHZ = 24,
    LGNC_ADEC_SAMPLING_FREQ_32_KHZ = 32,
    LGNC_ADEC_SAMPLING_FREQ_44_1KHZ = 44,
    LGNC_ADEC_SAMPLING_FREQ_48_KHZ = 48,
    LGNC_ADEC_SAMPLING_FREQ_NONE = 0,
};

typedef enum LGNC_ADEC_SAMPLING_FREQ_T LGNC_ADEC_SAMPLING_FREQ_T;

static inline LGNC_ADEC_SAMPLING_FREQ_T LGNC_ADEC_SAMPLING_FREQ_OF(int hertz)
{
    switch (hertz)
    {
    case 4000:
        return LGNC_ADEC_SAMPLING_FREQ_4_KHZ;
    case 8000:
        return LGNC_ADEC_SAMPLING_FREQ_8_KHZ;
    case 11025:
        return LGNC_ADEC_SAMPLING_FREQ_11_025KHZ;
    case 12000:
        return LGNC_ADEC_SAMPLING_FREQ_12_KHZ;
    case 16000:
        return LGNC_ADEC_SAMPLING_FREQ_16_KHZ;
    case 22050:
        return LGNC_ADEC_SAMPLING_FREQ_22_05KHZ;
    case 24000:
        return LGNC_ADEC_SAMPLING_FREQ_24_KHZ;
    case 32000:
        return LGNC_ADEC_SAMPLING_FREQ_32_KHZ;
    case 44100:
        return LGNC_ADEC_SAMPLING_FREQ_44_1KHZ;
    case 48000:
        return LGNC_ADEC_SAMPLING_FREQ_48_KHZ;
    default:
        return LGNC_ADEC_SAMPLING_FREQ_NONE;
    }
}

struct LGNC_ADEC_DATA_INFO_T
{
    LGNC_ADEC_FMT_T codec;
    LGNC_ADEC_CH_INDEX_T AChannel;
    LGNC_ADEC_SAMPLING_FREQ_T samplingFreq;
    unsigned int numberOfChannel;
    unsigned int bitPerSample;
};

typedef struct LGNC_ADEC_DATA_INFO_T LGNC_ADEC_DATA_INFO_T;

int LGNC_DIRECTAUDIO_CheckBuffer(int *length);
int LGNC_DIRECTAUDIO_Close();
int LGNC_DIRECTAUDIO_Open(LGNC_ADEC_DATA_INFO_T *info);
int LGNC_DIRECTAUDIO_Play(const void *data, unsigned int size);

#ifdef __cplusplus
}
#endif