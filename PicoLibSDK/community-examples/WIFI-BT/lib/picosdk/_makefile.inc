
ifeq ($(CYW43),1)
	include lib/picosdk/_makefile_sdk_glue.inc
	include lib/picosdk/_makefile_cyw43.inc

	DEFINE += -D CYW43_LWIP=0
	EXTRA_CFLAGS = $(INCLUDE_DIRS)
endif

ifeq ($(CYW43_IP),1)
	include lib/picosdk/_makefile_sdk_glue.inc
	include lib/picosdk/_makefile_cyw43.inc
	include lib/picosdk/_makefile_lwip.inc

	EXTRA_CFLAGS = $(INCLUDE_DIRS)
endif

ifeq ($(BTSTACK_CLASSIC),1)
	include lib/picosdk/_makefile_sdk_glue.inc
	include lib/picosdk/_makefile_cyw43.inc
	include lib/picosdk/_makefile_btstack.inc

	DEFINE += -D CYW43_LWIP=0
	EXTRA_CFLAGS = $(INCLUDE_DIRS)
endif




#ifeq ($(CYW43),1)
#	include _makefile_sdk_glue.inc
#	include _makefile_cyw43.inc
#
#	CYW43_LIB_DIR = ./lib/cyw43-driver
#    HARDWARE_CLAIM_LIB_DIR = ./lib/picosdk/hardware_claim
#    PICO_ASYNC_CONTEXT_LIB_DIR = ./lib/picosdk/pico_async_context
#    PICO_SYNC_LIB_DIR = ./lib/picosdk/pico_sync
#    PICO_SDK_GLUE_LIB_DIR = ./lib/picosdk/pico_sdk_glue
#    PICO_CYW43_ARCH_LIB_DIR = ./lib/picosdk/pico_cyw43_arch
#    PICO_CYW43_DRIVER_LIB_DIR = ./lib/picosdk/pico_cyw43_driver
#
#	INCLUDE_DIRS += -I$(CYW43_LIB_DIR)/include -I$(CYW43_LIB_DIR)/firmware
#	INCLUDE_DIRS += -I$(HARDWARE_CLAIM_LIB_DIR)/include -I$(PICO_ASYNC_CONTEXT_LIB_DIR)/include -I$(PICO_SDK_GLUE_LIB_DIR)/include -I$(PICO_SYNC_LIB_DIR)/include -I$(PICO_CYW43_ARCH_LIB_DIR)/include -I$(PICO_CYW43_DRIVER_LIB_DIR)/include
#
#	CSRC += lib/picosdk/hardware_claim/claim.c
#
#	CSRC += $(PICO_SDK_GLUE_LIB_DIR)/irq.c
#	CSRC += $(PICO_SDK_GLUE_LIB_DIR)/gpio.c
#	CSRC += $(PICO_SDK_GLUE_LIB_DIR)/time.c
#	CSRC += $(PICO_SDK_GLUE_LIB_DIR)/panic.c
#	CSRC += $(PICO_SDK_GLUE_LIB_DIR)/rand.c
#
#	CSRC += $(PICO_SYNC_LIB_DIR)/critical_section.c
#	CSRC += $(PICO_SYNC_LIB_DIR)/mutex.c
#
#	CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_base.c
#	CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_poll.c
#	CSRC += $(PICO_ASYNC_CONTEXT_LIB_DIR)/async_context_threadsafe_background.c
#
#	CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch.c
#	CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch_poll.c
#	CSRC += $(PICO_CYW43_ARCH_LIB_DIR)/cyw43_arch_threadsafe_background.c
#
#	CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cyw43_bus_pio_spi.c
#	CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cyw43_driver.c
#
#	ifeq ($(LWIP),1)
#		PICO_LWIP_LIB_DIR = ./lib/picosdk/pico_lwip
#		LWIP_LIB_DIR = ./lib/lwip/src/
#		INCLUDE_DIRS += -I$(PICO_LWIP_LIB_DIR)/include -I$(PICO_LWIP_LIB_DIR)/config -I$(LWIP_LIB_DIR)/include
#		DEFINE += -D CYW43_LWIP=1
#
#		CSRC += ${PICO_LWIP_LIB_DIR}/lwip_nosys.c
#
#        LWIPDIR = lib/lwip/src
#        include lib/lwip/src/Filelists.mk
#        CSRC += ${COREFILES}
#        CSRC += ${CORE4FILES}
#        CSRC += ${NETIFFILES}
#        CSRC += ${APIFILES}
#	else
#		DEFINE += -D CYW43_LWIP=0
#	endif
#
#	ifeq ($(BTSTACK),1)
#		PICO_BTSTACK_LIB_DIR = ./lib/picosdk/pico_btstack
#		INCLUDE_DIRS += -I$(PICO_BTSTACK_LIB_DIR)/include
#
#		DEFINE += -D CYW43_ENABLE_BLUETOOTH=1 -D ENABLE_CLASSIC=1
#
#		CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/btstack_chipset_cyw43.c
#        CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/btstack_cyw43.c
#        CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/btstack_hci_transport_cyw43.c
#        CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cybt_shared_bus/cybt_shared_bus.c
#        CSRC += $(PICO_CYW43_DRIVER_LIB_DIR)/cybt_shared_bus/cybt_shared_bus_driver.c
#
#        CSRC += $(PICO_BTSTACK_LIB_DIR)/btstack_flash_bank.c
#        CSRC += $(PICO_BTSTACK_LIB_DIR)/btstack_run_loop_async_context.c
#        CSRC += $(PICO_BTSTACK_LIB_DIR)/btstack_stdin_pico.c
#
#        # pico_btstack_base
#   		BTSTACK_LIB_DIR = ./lib/btstack
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/md5
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/micro-ecc
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/rijndael
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/segger-rtt
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/yxml
#   		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/platform/embedded
#  		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/src
#
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/md5/md5.c
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/micro-ecc/uECC.c
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/rijndael/rijndael.c
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/segger-rtt/SEGGER_RTT.c
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/segger-rtt/SEGGER_RTT_printf.c
#        CSRC += $(BTSTACK_LIB_DIR)/3rd-party/yxml/yxml.c
#        CSRC += $(BTSTACK_LIB_DIR)/platform/embedded/btstack_tlv_flash_bank.c
#        CSRC += $(BTSTACK_LIB_DIR)/platform/embedded/hci_dump_embedded_stdout.c
#        CSRC += $(BTSTACK_LIB_DIR)/platform/embedded/hci_dump_segger_rtt_stdout.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/ad_parser.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_audio.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_base64_decoder.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_crypto.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_hid_parser.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_linked_list.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_memory.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_memory_pool.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_resample.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_ring_buffer.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_run_loop.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_run_loop_base.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_slip.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_tlv.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_tlv_none.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/btstack_util.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/hci.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/hci_cmd.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/hci_dump.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/hci_event.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/l2cap.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/l2cap_signaling.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/mesh/gatt-service/mesh_provisioning_service_server.c
#        CSRC += $(BTSTACK_LIB_DIR)/src/mesh/gatt-service/mesh_proxy_service_server.c
#
#        # pico_btstack_classic
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/a2dp.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/a2dp_sink.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/a2dp_source.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp_acceptor.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp_initiator.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp_sink.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp_source.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avdtp_util.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_browsing.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_browsing_controller.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_browsing_target.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_controller.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_cover_art_client.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_media_item_iterator.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/avrcp_target.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_cvsd_plc.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_link_key_db_tlv.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_sbc_plc.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/device_id_server.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/gatt_sdp.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/goep_client.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/goep_server.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hfp.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hfp_ag.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hfp_gsm_model.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hfp_hf.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hfp_msbc.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hid_device.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hid_host.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hsp_ag.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/hsp_hs.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/obex_iterator.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/obex_message_builder.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/obex_parser.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/pan.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/pbap_client.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/rfcomm.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/sdp_client.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/sdp_client_rfcomm.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/sdp_server.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/sdp_util.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/spp_server.c
#
#		# pico_btstack_sbc_common
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_sbc_bluedroid.c
#
#		# pico_btstack_sbc_encoder
#		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/include
#
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_analysis.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_dct.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_dct_coeffs.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_enc_bit_alloc_mono.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_enc_bit_alloc_ste.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_enc_coeffs.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_encoder.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/encoder/srce/sbc_packing.c
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_sbc_encoder_bluedroid.c
#
#
#		# pico_btstack_sbc_decoder
#		INCLUDE_DIRS += -I$(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/include
#
#		CSRC += $(BTSTACK_LIB_DIR)/src/classic/btstack_sbc_decoder_bluedroid.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/alloc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/bitalloc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/bitalloc-sbc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/bitstream-decode.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/decoder-oina.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/decoder-private.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/decoder-sbc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/dequant.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/framing.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/framing-sbc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/oi_codec_version.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/synthesis-sbc.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/synthesis-dct8.c
#		CSRC += $(BTSTACK_LIB_DIR)/3rd-party/bluedroid/decoder/srce/synthesis-8-generated.c
#	endif
#endif