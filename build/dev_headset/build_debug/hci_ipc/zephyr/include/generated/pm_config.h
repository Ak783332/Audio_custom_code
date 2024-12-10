/* File generated by C:\ncs\v2.6.1\nrf\scripts\partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#define PM__APP_OFFSET 0x0
#define PM__APP_ADDRESS 0x0
#define PM__APP_END_ADDRESS 0x100000
#define PM__APP_SIZE 0x100000
#define PM__APP_NAME app
#define PM__APP_ID 0
#define PM__app_ID PM_APP_ID
#define PM__app_IS_ENABLED 1
#define PM_0_LABEL _APP
#define PM__APP_DEV flash_controller
#define PM__APP_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM__OTP_OFFSET 0x0
#define PM__OTP_ADDRESS 0xff8100
#define PM__OTP_END_ADDRESS 0xff83fc
#define PM__OTP_SIZE 0x2fc
#define PM__OTP_NAME otp
#define PM__SRAM_PRIMARY_OFFSET 0x0
#define PM__SRAM_PRIMARY_ADDRESS 0x20000000
#define PM__SRAM_PRIMARY_END_ADDRESS 0x20070000
#define PM__SRAM_PRIMARY_SIZE 0x70000
#define PM__SRAM_PRIMARY_NAME sram_primary
#define PM__RPMSG_NRF53_SRAM_OFFSET 0x70000
#define PM__RPMSG_NRF53_SRAM_ADDRESS 0x20070000
#define PM__RPMSG_NRF53_SRAM_END_ADDRESS 0x20080000
#define PM__RPMSG_NRF53_SRAM_SIZE 0x10000
#define PM__RPMSG_NRF53_SRAM_NAME rpmsg_nrf53_sram
#define PM__NUM 1
#define PM__ALL_BY_SIZE "otp rpmsg_nrf53_sram sram_primary app"
#define PM_APP_OFFSET 0x0
#define PM_APP_ADDRESS 0x1000000
#define PM_APP_END_ADDRESS 0x1040000
#define PM_APP_SIZE 0x40000
#define PM_APP_NAME app
#define PM_APP_ID 1
#define PM_app_ID PM_APP_ID
#define PM_app_IS_ENABLED 1
#define PM_1_LABEL APP
#define PM_APP_DEV flash_controller
#define PM_APP_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_HCI_IPC_OFFSET 0x0
#define PM_HCI_IPC_ADDRESS 0x1000000
#define PM_HCI_IPC_END_ADDRESS 0x1040000
#define PM_HCI_IPC_SIZE 0x40000
#define PM_HCI_IPC_NAME hci_ipc
#define PM_HCI_IPC_ID 2
#define PM_hci_ipc_ID PM_HCI_IPC_ID
#define PM_hci_ipc_IS_ENABLED 1
#define PM_2_LABEL HCI_IPC
#define PM_HCI_IPC_DEV flash_controller
#define PM_HCI_IPC_DEFAULT_DRIVER_KCONFIG CONFIG_SOC_FLASH_NRF
#define PM_SRAM_PRIMARY_OFFSET 0x0
#define PM_SRAM_PRIMARY_ADDRESS 0x21000000
#define PM_SRAM_PRIMARY_END_ADDRESS 0x21010000
#define PM_SRAM_PRIMARY_SIZE 0x10000
#define PM_SRAM_PRIMARY_NAME sram_primary
#define PM_NUM 3
#define PM_ALL_BY_SIZE "sram_primary hci_ipc app"
#define PM_ADDRESS 0x1000000
#define PM_SIZE 0x40000
#define PM_SRAM_ADDRESS 0x21000000
#define PM_SRAM_SIZE 0x10000
#endif /* PM_CONFIG_H__ */