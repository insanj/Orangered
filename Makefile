ARCHS = armv7 armv7s arm64
TARGET= :clang
include theos/makefiles/common.mk

TWEAK_NAME = OrangeredForiOS7
OrangeredForiOS7_FILES = $(wildcard *.xm) $(wildcard *.m) AFNetworking/$(wildcard *.m) RedditKit/$(wildcard *.m) Mantle/$(wildcard *.m)
OrangeredForiOS7_FRAMEWORKS = AudioToolbox CFNetwork CoreLocation Security StoreKit UIKit QuartzCore CoreGraphics SystemConfiguration Security MobileCoreServices
OrangeredForiOS7_PRIVATE_FRAMEWORKS = BulletinBoard
OrangeredForiOS7_CFLAGS = -fobjc-arc
OrangeredForiOS7_LDFLAGS = -L/usr/lib/ -lactivator
OrangeredForiOS7_LIBRARIES += z

include $(THEOS_MAKE_PATH)/tweak.mk
SUBPROJECTS += ORPrefs
include $(THEOS_MAKE_PATH)/aggregate.mk

after-install::
	install.exec "killall -9 backboardd"

