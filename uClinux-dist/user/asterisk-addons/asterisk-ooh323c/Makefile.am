AUTOMAKE_OPTIONS = gnu
CFLAGS = $(ASTERISK_INCLUDE) @OOH323CFLAGS@
INSTALLPREFIX=@OOASTINSTALL@
lib_LTLIBRARIES = libchan_h323.la
libchan_h323_la_LDFLAGS = -L$(top_builddir)/ooh323c/src -version-info 1:1:0
libchan_h323_la_SOURCES = src/chan_h323.h src/chan_h323.c src/ooh323cDriver.h src/ooh323cDriver.c ooh323c/src/ooCmdChannel.h ooh323c/src/ooCmdChannel.c ooh323c/src/ooLogChan.h ooh323c/src/ooLogChan.c ooh323c/src/ooUtils.c ooh323c/src/ooUtils.h ooh323c/src/ooGkClient.h ooh323c/src/ooGkClient.c ooh323c/src/context.c ooh323c/src/ooCommon.h ooh323c/src/ooDateTime.h ooh323c/src/ooDateTime.c ooh323c/src/decode.c ooh323c/src/dlist.c ooh323c/src/encode.c ooh323c/src/errmgmt.c ooh323c/src/memheap.c ooh323c/src/memheap.h ooh323c/src/ooasn1.h  ooh323c/src/ootrace.h ooh323c/src/ootrace.c ooh323c/src/oochannels.c ooh323c/src/oochannels.h ooh323c/src/ooh245.c ooh323c/src/ooh245.h ooh323c/src/oohdr.h ooh323c/src/ooper.h ooh323c/src/ooports.c ooh323c/src/ooports.h ooh323c/src/ooq931.c ooh323c/src/ooq931.h ooh323c/src/ooCapability.c ooh323c/src/ooCapability.h ooh323c/src/ooSocket.c ooh323c/src/ooSocket.h ooh323c/src/ootypes.h ooh323c/src/perutil.c ooh323c/src/eventHandler.c ooh323c/src/eventHandler.h ooh323c/src/ooCalls.c ooh323c/src/ooCalls.h ooh323c/src/ooStackCmds.c ooh323c/src/ooStackCmds.h ooh323c/src/ooh323.c ooh323c/src/ooh323.h ooh323c/src/ooh323ep.c ooh323c/src/ooh323ep.h ooh323c/src/printHandler.c ooh323c/src/printHandler.h ooh323c/src/rtctype.c ooh323c/src/rtctype.h ooh323c/src/ooTimer.c ooh323c/src/ooTimer.h ooh323c/src/h323/H235-SECURITY-MESSAGESDec.c ooh323c/src/h323/H235-SECURITY-MESSAGESEnc.c ooh323c/src/h323/H235-SECURITY-MESSAGES.h ooh323c/src/h323/H323-MESSAGES.c ooh323c/src/h323/H323-MESSAGESDec.c ooh323c/src/h323/H323-MESSAGESEnc.c ooh323c/src/h323/H323-MESSAGES.h ooh323c/src/h323/MULTIMEDIA-SYSTEM-CONTROL.c ooh323c/src/h323/MULTIMEDIA-SYSTEM-CONTROLDec.c ooh323c/src/h323/MULTIMEDIA-SYSTEM-CONTROLEnc.c ooh323c/src/h323/MULTIMEDIA-SYSTEM-CONTROL.h

INCLUDES = -I$(top_builddir)/ooh323c/src -I$(top_builddir)/ooh323c/src/h323

libchan_h323_la_LIBADD = -lpthread 




opt:
	$(MAKE) "CFLAGS = -DGNU -D_GNU_SOURCE -D_REENTRANT -O2" all

debug:
	$(MAKE) "CFLAGS = -g -DGNU -D_GNU_SOURCE -D_REENTRANT" all

debugthread:
	$(MAKE) "CFLAGS = -g -DGNU -D_GNU_SOURCE -D_REENTRANT $(DEBUG_THREADS)" all

install: 
	cp .libs/libchan_h323.so.1.0.1 $(DESTDIR)/usr/lib/asterisk/modules/chan_ooh323.so

sample:
	cp h323.conf.sample $(DESTDIR)/etc/asterisk/ooh323.conf


EXTRA_DIST = extensions.conf h323.conf README COPYING
