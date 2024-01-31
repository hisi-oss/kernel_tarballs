

#ifndef __DMAC_DFX_H__
#define __DMAC_DFX_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#include "oal_ext_if.h"
#include "mac_vap.h"
#include "mac_device.h"
#include "hal_ext_if.h"
#include "dmac_ext_if.h"
#include "dmac_dft.h"
/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_DFX_H

/*****************************************************************************
  2 宏定义
*****************************************************************************/


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
/* 可维可测统计功能初始化 */
typedef struct
{
    frw_timeout_stru            st_timer;
}dmac_exception_stat_stru;

typedef struct
{
    dmac_exception_stat_stru            st_excp_stat_info;
}dmac_dft_stru;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern oal_uint32 oam_exception_stat_timeout(void *p_arg);
extern oal_uint32 dmac_dfx_init(oal_void);
extern oal_uint32 dmac_dfx_exit(oal_void);

extern oal_uint32  dmac_custom_init(oal_uint32 ul_psta_enable);

extern oal_uint32  dmac_dfr_process_mac_error(
                                    mac_device_stru                 *pst_mac_device,
                                    hal_mac_error_type_enum_uint8    en_error_id,
                                    oal_uint32     ul_error1_irq_state,
                                    oal_uint32     ul_error2_irq_state);
#ifdef _PRE_WLAN_FEATURE_DFR
extern oal_uint32 dmac_dfr_init(oal_void *p_arg);
extern oal_uint32  dmac_dfr_tx_comp_timeout_handle(oal_void *p_arg);
#if (_PRE_PRODUCT_ID == _PRE_PRODUCT_ID_HI1151)
oal_uint32  dmac_pcie_err_timeout(oal_void *p_arg);
#endif

#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of dmac_dfx.h */
