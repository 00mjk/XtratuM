all: xmpack

INSTALL=xmpack

include ../../../xmconfig
include $(XTRATUM_PATH)/config.mk
include $(XTRATUM_PATH)/user/rules.mk
include $(XTRATUM_PATH)/user/install.mk

-include dephost.mk

SRCS=xmpack.c
OBJS := $(patsubst %.c,%.o,$(SRCS))

HOST_CFLAGS += --include xm_inc/config.h

%.o: %.c
	$(HOST_CC) $(HOST_CFLAGS) -o $@ -c $<

xmpack: $(OBJS)
	$(HOST_CC) $(HOST_CFLAGS) -o $@ $(OBJS)

%.1: %.pod
	pod2man -c "XtratuM Utilities" -r -s 1 -n $(<:%.pod=%)  $< -o $@

distclean: clean
	@find -name "*.o" -exec rm '{}' \;
	@find -name "*~" -exec rm '{}' \;
	@find -name "dep.mk" -exec rm '{}' \;
clean:
	@$(RM) -f *.o *~ $(OBJS) xmpack xmpack.1 dephost.mk

