# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# This file sets variables that control the way modules are built
# thorughout the system. It should not be used to conditionally
# disable makefiles (the proper mechanism to control what gets
# included in a build is to use PRODUCT_PACKAGES in a product
# definition file).
#

# WARNING: This line must come *before* including the proprietary
# variant, so that it gets overwritten by the parent (which goes
# against the traditional rules of inheritance).

BOARD_VENDOR := htc

# Bootloader
TARGET_BOOTLOADER_BOARD_NAME := MSM8960
TARGET_NO_BOOTLOADER := true

# Platform
TARGET_BOARD_PLATFORM := msm8960
TARGET_BOARD_PLATFORM_GPU := qcom-adreno200

# Architecture
TARGET_ARCH := arm
TARGET_ARCH_VARIANT := armv7-a-neon
TARGET_CPU_ABI := armeabi-v7a
TARGET_CPU_ABI2 := armeabi
TARGET_CPU_VARIANT := krait
TARGET_USE_QCOM_BIONIC_OPTIMIZATION := true

# Flags
COMMON_GLOBAL_CFLAGS += -DHTCLOG

# Fonts
EXTENDED_FONT_FOOTPRINT := true

# QCOM hardware
BOARD_USES_QCOM_HARDWARE := true

# Audio
BOARD_USES_ALSA_AUDIO := true
BOARD_USES_LEGACY_ALSA_AUDIO := true
TARGET_USES_QCOM_COMPRESSED_AUDIO := true
QCOM_ANC_HEADSET_ENABLED := false
QCOM_FLUENCE_ENABLED := false

# Bluetooth
BOARD_HAVE_BLUETOOTH := true

# Graphics
BOARD_EGL_CFG := device/htc/msm8960-common/configs/egl.cfg
NUM_FRAMEBUFFER_SURFACE_BUFFERS := 3
TARGET_DISPLAY_USE_RETIRE_FENCE := true
TARGET_USES_C2D_COMPOSITION := true
TARGET_USES_ION := true
USE_OPENGL_RENDERER := true

# Lights
TARGET_PROVIDES_LIBLIGHT := true

# Power
TARGET_POWERHAL_VARIANT := qcom

# SELinux
include device/qcom/sepolicy/sepolicy.mk
BOARD_SEPOLICY_DIRS += device/htc/msm8960-common/sepolicy

BOARD_SEPOLICY_UNION += \
	device.te \
	file.te \
	file_contexts \
	mediaserver.te \
	mm-qcamerad.te \
	mpdecision.te \
	netmgrd.te \
	qmuxd.te \
	rmt_storage.te \
	surfaceflinger.te \
	system_server.te \
	thermal-engine.te \
	ueventd.te \
	vold.te \
	wpa.te

