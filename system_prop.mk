# Audio
PRODUCT_PROPERTY_OVERRIDES += \
    lpa.decode=true \
    persist.audio.fluence.mode=endfire \
    persist.audio.vr.enable=false \
    persist.audio.handset.mic=analog \
    persist.audio.speaker.location=high \
    qcom.hw.aac.encoder=true \
    ro.qc.sdk.audio.fluencetype=fluence \

# Camera
PRODUCT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    debug.composition.type=dyn \
    debug.egl.hw=1 \
    debug.mdpcomp.logs=0 \
    debug.sf.hw=1 \
    persist.hwc.mdpcomp.enable=true

# Media
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.media.use-awesome=true

# Thermal
PRODUCT_PROPERTY_OVERRIDES += \
    persist.thermal.monitor=true

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    ro.telephony.call_ring.multiple=0

# WiFi
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0
