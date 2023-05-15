#ifndef __gm_window_h__
#define __gm_window_h__

typedef enum _GM_PIXMAP_FLAG_T {
    GM_PIXMAP_DEFAULT       = 0,    /* System memory */
    GM_PIXMAP_SUPPORTS_UMA  = 1,
} GM_PIXMAP_FLAG_T;

typedef struct GM_PIXMAP_T {
    unsigned int height;
    unsigned int width;
    unsigned int bytes_per_pixel;
    unsigned char buffer_size;
    unsigned char red_size;
    unsigned char green_size;
    unsigned char blue_size;
    unsigned char alpha_size;
    unsigned char luminance_size;
    unsigned short *data;
    GM_PIXMAP_FLAG_T flags;
} GM_PIXMAP_T;

#endif
