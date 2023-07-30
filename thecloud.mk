
######################################
#
# thecloud
#
######################################
THECLOUD_VERSION = 0.1
THECLOUD_SITE = $(call github,sensorium,thecloud.lv2,$(THECLOUD_VERSION))
THECLOUD_BUNDLES = thecloud.lv2

THECLOUD_TARGET_MAKE = $(TARGET_MAKE_ENV) $(TARGET_CONFIGURE_OPTS) $(MAKE) MOD=1 OPTIMIZATIONS="" PREFIX=/usr -C $(@D)

define THECLOUD_BUILD_CMDS
	$(THECLOUD_TARGET_MAKE)
endef

define THECLOUD_INSTALL_TARGET_CMDS
	$(THECLOUD_TARGET_MAKE) install DESTDIR=$(TARGET_DIR)
	cp -rL $($(PKG)_PKGDIR)/thecloud.lv2/* $(TARGET_DIR)/usr/lib/lv2/thecloud.lv2/
endef

$(eval $(generic-package))

