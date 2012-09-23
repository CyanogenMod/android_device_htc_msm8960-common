/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _MSM_MDP_H_
#define _MSM_MDP_H_
#include <linux/types.h>
#include <linux/fb.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_IOCTL_MAGIC 'm'
#define MSMFB_GRP_DISP _IOW(MSMFB_IOCTL_MAGIC, 1, unsigned int)
#define MSMFB_BLIT _IOW(MSMFB_IOCTL_MAGIC, 2, unsigned int)
#define MSMFB_SUSPEND_SW_REFRESHER _IOW(MSMFB_IOCTL_MAGIC, 128, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_RESUME_SW_REFRESHER _IOW(MSMFB_IOCTL_MAGIC, 129, unsigned int)
#define MSMFB_CURSOR _IOW(MSMFB_IOCTL_MAGIC, 130, struct fb_cursor)
#define MSMFB_SET_LUT _IOW(MSMFB_IOCTL_MAGIC, 131, struct fb_cmap)
#define MSMFB_HISTOGRAM _IOWR(MSMFB_IOCTL_MAGIC, 132, struct mdp_histogram)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_GET_CCS_MATRIX _IOWR(MSMFB_IOCTL_MAGIC, 133, struct mdp_ccs)
#define MSMFB_SET_CCS_MATRIX _IOW(MSMFB_IOCTL_MAGIC, 134, struct mdp_ccs)
#define MSMFB_OVERLAY_SET _IOWR(MSMFB_IOCTL_MAGIC, 135,   struct mdp_overlay)
#define MSMFB_OVERLAY_UNSET _IOW(MSMFB_IOCTL_MAGIC, 136, unsigned int)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_OVERLAY_PLAY _IOW(MSMFB_IOCTL_MAGIC, 137,   struct msmfb_overlay_data)
#define MSMFB_GET_PAGE_PROTECTION _IOR(MSMFB_IOCTL_MAGIC, 138,   struct mdp_page_protection)
#define MSMFB_SET_PAGE_PROTECTION _IOW(MSMFB_IOCTL_MAGIC, 139,   struct mdp_page_protection)
#define MSMFB_OVERLAY_GET _IOR(MSMFB_IOCTL_MAGIC, 140,   struct mdp_overlay)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_OVERLAY_PLAY_ENABLE _IOW(MSMFB_IOCTL_MAGIC, 141, unsigned int)
#define MSMFB_OVERLAY_BLT _IOWR(MSMFB_IOCTL_MAGIC, 142,   struct msmfb_overlay_blt)
#define MSMFB_OVERLAY_BLT_OFFSET _IOW(MSMFB_IOCTL_MAGIC, 143, unsigned int)
#define MSMFB_HISTOGRAM_START _IO(MSMFB_IOCTL_MAGIC, 144)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_HISTOGRAM_STOP _IO(MSMFB_IOCTL_MAGIC, 145)
#define MSMFB_NOTIFY_UPDATE _IOW(MSMFB_IOCTL_MAGIC, 146, unsigned int)
#define MSMFB_OVERLAY_3D _IOWR(MSMFB_IOCTL_MAGIC, 147,   struct msmfb_overlay_3d)
#define MSMFB_MIXER_INFO _IOWR(MSMFB_IOCTL_MAGIC, 148,   struct msmfb_mixer_info_req)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_OVERLAY_PLAY_WAIT _IOWR(MSMFB_IOCTL_MAGIC, 149,   struct msmfb_overlay_data)
#define MSMFB_WRITEBACK_INIT _IO(MSMFB_IOCTL_MAGIC, 150)
#define MSMFB_WRITEBACK_START _IO(MSMFB_IOCTL_MAGIC, 151)
#define MSMFB_WRITEBACK_STOP _IO(MSMFB_IOCTL_MAGIC, 152)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_WRITEBACK_QUEUE_BUFFER _IOW(MSMFB_IOCTL_MAGIC, 153,   struct msmfb_data)
#define MSMFB_WRITEBACK_DEQUEUE_BUFFER _IOW(MSMFB_IOCTL_MAGIC, 154,   struct msmfb_data)
#define MSMFB_WRITEBACK_TERMINATE _IO(MSMFB_IOCTL_MAGIC, 155)
#define MSMFB_MDP_PP _IOWR(MSMFB_IOCTL_MAGIC, 156, struct msmfb_mdp_pp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FB_TYPE_3D_PANEL 0x10101010
#define MDP_IMGTYPE2_START 0x10000
#define MSMFB_DRIVER_VERSION 0xF9E8D701
#define MSMFB_GET_GAMMA_CURVY _IOWR(MSMFB_IOCTL_MAGIC, 201, struct gamma_curvy)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_GET_USB_PROJECTOR_INFO _IOR(MSMFB_IOCTL_MAGIC, 301, struct msmfb_usb_projector_info)
#define MSMFB_SET_USB_PROJECTOR_INFO _IOW(MSMFB_IOCTL_MAGIC, 302, struct msmfb_usb_projector_info)
enum {
 NOTIFY_UPDATE_START,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NOTIFY_UPDATE_STOP,
 NOTIFY_TERMINATE_BLOCKING,
 NOTIFY_NUM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 MDP_RGB_565,
 MDP_XRGB_8888,
 MDP_Y_CBCR_H2V2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_ARGB_8888,
 MDP_RGB_888,
 MDP_Y_CRCB_H2V2,
 MDP_YCRYCB_H2V1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_Y_CRCB_H2V1,
 MDP_Y_CBCR_H2V1,
 MDP_RGBA_8888,
 MDP_BGRA_8888,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_RGBX_8888,
 MDP_Y_CRCB_H2V2_TILE,
 MDP_Y_CBCR_H2V2_TILE,
 MDP_Y_CR_CB_H2V2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_Y_CR_CB_GH2V2,
 MDP_Y_CB_CR_H2V2,
 MDP_Y_CRCB_H1V1,
 MDP_Y_CBCR_H1V1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_IMGTYPE_LIMIT,
 MDP_BGR_565 = MDP_IMGTYPE2_START,
 MDP_FB_FORMAT,
 MDP_IMGTYPE_LIMIT2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 PMEM_IMG,
 FB_IMG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 HSIC_HUE = 0,
 HSIC_SAT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HSIC_INT,
 HSIC_CON,
 NUM_HSIC_PARAM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_ROT_NOP 0
#define MDP_FLIP_LR 0x1
#define MDP_FLIP_UD 0x2
#define MDP_ROT_90 0x4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_ROT_180 (MDP_FLIP_UD|MDP_FLIP_LR)
#define MDP_ROT_270 (MDP_ROT_90|MDP_FLIP_UD|MDP_FLIP_LR)
#define MDP_DITHER 0x8
#define MDP_BLUR 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_BLEND_FG_PREMULT 0x20000
#define MDP_DEINTERLACE 0x80000000
#define MDP_SHARPENING 0x40000000
#define MDP_NO_DMA_BARRIER_START 0x20000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_NO_DMA_BARRIER_END 0x10000000
#define MDP_NO_BLIT 0x08000000
#define MDP_BLIT_WITH_DMA_BARRIERS 0x000
#define MDP_BLIT_WITH_NO_DMA_BARRIERS   (MDP_NO_DMA_BARRIER_START | MDP_NO_DMA_BARRIER_END)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_BLIT_SRC_GEM 0x04000000
#define MDP_BLIT_DST_GEM 0x02000000
#define MDP_BLIT_NON_CACHED 0x01000000
#define MDP_OV_PIPE_SHARE 0x00800000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_DEINTERLACE_ODD 0x00400000
#define MDP_OV_PLAY_NOWAIT 0x00200000
#define MDP_SOURCE_ROTATED_90 0x00100000
#define MDP_DPP_HSIC 0x00080000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_BACKEND_COMPOSITION 0x00040000
#define MDP_BORDERFILL_SUPPORTED 0x00010000
#define MDP_SECURE_OVERLAY_SESSION 0x00008000
#define MDP_MEMORY_ID_TYPE_FB 0x00001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_TRANSP_NOP 0xffffffff
#define MDP_ALPHA_NOP 0xff
#define MDP_FB_PAGE_PROTECTION_NONCACHED (0)
#define MDP_FB_PAGE_PROTECTION_WRITECOMBINE (1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_FB_PAGE_PROTECTION_WRITETHROUGHCACHE (2)
#define MDP_FB_PAGE_PROTECTION_WRITEBACKCACHE (3)
#define MDP_FB_PAGE_PROTECTION_WRITEBACKWACACHE (4)
#define MDP_FB_PAGE_PROTECTION_INVALID (5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_NUM_FB_PAGE_PROTECTION_VALUES (5)
struct mdp_rect {
 uint32_t x;
 uint32_t y;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t w;
 uint32_t h;
};
struct mdp_img {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t width;
 uint32_t height;
 uint32_t format;
 uint32_t offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int memory_id;
 uint32_t priv;
};
#define MDP_CCS_RGB2YUV 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_CCS_YUV2RGB 1
#define MDP_CCS_SIZE 9
#define MDP_BV_SIZE 3
struct mdp_ccs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int direction;
 uint16_t ccs[MDP_CCS_SIZE];
 uint16_t bv[MDP_BV_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mdp_csc {
 int id;
 uint32_t csc_mv[9];
 uint32_t csc_pre_bv[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t csc_post_bv[3];
 uint32_t csc_pre_lv[6];
 uint32_t csc_post_lv[6];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDP_BLIT_REQ_VERSION 2
struct mdp_blit_req {
 struct mdp_img src;
 struct mdp_img dst;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mdp_rect src_rect;
 struct mdp_rect dst_rect;
 uint32_t alpha;
 uint32_t transp_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t flags;
 int sharpening_strength;
};
struct mdp_blit_req_list {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t count;
 struct mdp_blit_req req[];
};
#define MSMFB_DATA_VERSION 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msmfb_data {
 uint32_t offset;
 int memory_id;
 int id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t flags;
 uint32_t priv;
 uint32_t iova;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSMFB_NEW_REQUEST -1
struct msmfb_overlay_data {
 uint32_t id;
 struct msmfb_data data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t version_key;
 struct msmfb_data plane1_data;
 struct msmfb_data plane2_data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msmfb_img {
 uint32_t width;
 uint32_t height;
 uint32_t format;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MSMFB_WRITEBACK_DEQUEUE_BLOCKING 0x1
struct msmfb_writeback_data {
 struct msmfb_data buf_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct msmfb_img img;
};
struct dpp_ctrl {
 int8_t sharp_strength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int8_t hsic_params[NUM_HSIC_PARAM];
};
struct mdp_overlay {
 struct msmfb_img src;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mdp_rect src_rect;
 struct mdp_rect dst_rect;
 uint32_t z_order;
 uint32_t is_fg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t alpha;
 uint32_t transp_mask;
 uint32_t flags;
 uint32_t id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t user_data[8];
 struct dpp_ctrl dpp;
};
struct msmfb_overlay_3d {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t is_3d;
 uint32_t width;
 uint32_t height;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msmfb_overlay_blt {
 uint32_t enable;
 uint32_t offset;
 uint32_t width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t height;
 uint32_t bpp;
};
struct mdp_histogram {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t frame_cnt;
 uint32_t bin_cnt;
 uint32_t *r;
 uint32_t *g;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t *b;
};
enum {
 MDP_BLOCK_RESERVED = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_BLOCK_OVERLAY_0,
 MDP_BLOCK_OVERLAY_1,
 MDP_BLOCK_VG_1,
 MDP_BLOCK_VG_2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_BLOCK_RGB_1,
 MDP_BLOCK_RGB_2,
 MDP_BLOCK_DMA_P,
 MDP_BLOCK_DMA_S,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDP_BLOCK_DMA_E,
 MDP_BLOCK_MAX,
};
struct mdp_pcc_coeff {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t c, r, g, b, rr, gg, bb, rg, gb, rb, rgb_0, rgb_1;
};
struct mdp_pcc_cfg_data {
 uint32_t block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t ops;
 struct mdp_pcc_coeff r, g, b;
};
struct mdp_csc_cfg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t flags;
 uint32_t csc_mv[9];
 uint32_t csc_pre_bv[3];
 uint32_t csc_post_bv[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t csc_pre_lv[6];
 uint32_t csc_post_lv[6];
};
struct mdp_csc_cfg_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t block;
 struct mdp_csc_cfg csc_data;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 mdp_lut_igc,
 mdp_lut_pgc,
 mdp_lut_hist,
 mdp_lut_max,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mdp_igc_lut_data {
 uint32_t block;
 uint32_t len, ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t *c0_c1_data;
 uint32_t *c2_data;
};
struct mdp_ar_gc_lut_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t x_start;
 uint32_t slope;
 uint32_t offset;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mdp_pgc_lut_data {
 uint32_t block;
 uint32_t flags;
 uint8_t num_r_stages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t num_g_stages;
 uint8_t num_b_stages;
 struct mdp_ar_gc_lut_data *r_data;
 struct mdp_ar_gc_lut_data *g_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mdp_ar_gc_lut_data *b_data;
};
struct mdp_hist_lut_data {
 uint32_t block;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t ops;
 uint32_t len;
 uint32_t *data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mdp_lut_cfg_data {
 uint32_t lut_type;
 union {
 struct mdp_igc_lut_data igc_lut_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mdp_pgc_lut_data pgc_lut_data;
 struct mdp_hist_lut_data hist_lut_data;
 } data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 mdp_op_pcc_cfg,
 mdp_op_csc_cfg,
 mdp_op_lut_cfg,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 mdp_op_max,
};
struct msmfb_mdp_pp {
 uint32_t op;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct mdp_pcc_cfg_data pcc_cfg_data;
 struct mdp_csc_cfg_data csc_cfg_data;
 struct mdp_lut_cfg_data lut_cfg_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } data;
};
struct mdp_page_protection {
 uint32_t page_protection;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mdp_mixer_info {
 int pndx;
 int pnum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ptype;
 int mixer_num;
 int z_order;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_PIPE_PER_MIXER 4
struct msmfb_mixer_info_req {
 int mixer_num;
 int cnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mdp_mixer_info info[MAX_PIPE_PER_MIXER];
};
enum {
 DISPLAY_SUBSYSTEM_ID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ROTATOR_SUBSYSTEM_ID,
};
struct msmfb_usb_projector_info {
 int usb_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int latest_offset;
};
#endif

