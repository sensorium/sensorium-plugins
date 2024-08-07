
######################################
#
# SENSORIUM_PLUGINS
#
######################################
SENSORIUM_PLUGINS_VERSION = db5751dc4fc71ba84865f9000885c834b5c517f7    # Use a commit tag (eg. release version) or a full commit ID (find with "git log" in cli)
SENSORIUM_PLUGINS_SITE = $(call github,sensorium,sensorium-plugins,thecloud.lv2,$(SENSORIUM_PLUGINS_VERSION))
SENSORIUM_PLUGINS_BUNDLES = thecloud.lv2

SENSORIUM_PLUGINS_TARGET_MAKE = $(TARGET_MAKE_ENV) $(TARGET_CONFIGURE_OPTS) $(MAKE) MOD=1 OPTIMIZATIONS="" PREFIX=/usr -C $(@D)

define SENSORIUM_PLUGINS_BUILD_CMDS
	$(SENSORIUM_PLUGINS_TARGET_MAKE)
endef

define SENSORIUM_PLUGINS_INSTALL_TARGET_CMDS
	$(SENSORIUM_PLUGINS_TARGET_MAKE) install DESTDIR=$(TARGET_DIR)
	cp -rL $($(PKG)_PKGDIR)/thecloud.lv2/* $(TARGET_DIR)/usr/lib/lv2/thecloud.lv2/
endef

$(eval $(generic-package))

