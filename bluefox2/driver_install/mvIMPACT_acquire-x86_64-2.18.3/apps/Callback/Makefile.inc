#! /bin/make
##############################################
# Makefile for the 'Callback' sample
##############################################
#-------------------------------------------
ifndef MVIMPACT_ACQUIRE_SOURCE_DIR
    ifndef MVIMPACT_ACQUIRE_DIR
        ROOT_PATH=../..
    else
        ROOT_PATH=$(MVIMPACT_ACQUIRE_DIR)/apps
    endif
else
    ROOT_PATH=$(MVIMPACT_ACQUIRE_SOURCE_DIR)/apps
endif

#-------------------------------------------
MODULE_NAME=Callback

#-------------------------------------------
OOBJ =										\

#-------------------------------------------
vpath %.cpp ..

#-------------------------------------------
USR_INCLS =					\

#-------------------------------------------
USR_LIBS = 					\

#-------------------------------------------
CPPFLAGS_1 = 				\
	-pedantic				\
	-DMALLOC_TRACE

#-------------------------------------------
include $(ROOT_PATH)/Makefile.samp.inc
