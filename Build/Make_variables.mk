CURRENT_FOLDER:=.
TOP_FOLDER:=
FOLDER_LST:=
SRC_LST:=
HDR_LST:=
ASM_LST:=
INC_FOLDER:=
DEP_FOLDER:=./Dependencies
OBJ_FOLDER:=./Objects
BIN_FOLDER:=./Bin
SPACE_LITERAL := $(subst ,, )

# Get top folder
$(eval $(call get_top, $(CURRENT_FOLDER), TOP_FOLDER,TOP.top))

# Get sources folders
SRC_FOLDER =$(dir $(shell find $(TOP_FOLDER) -name CODE.code))
SRC_FOLDER:=$(SRC_FOLDER:/=)
$(eval $(call get_all_folders, $(SRC_FOLDER), FOLDER_LST))

# Get list of C sources and header directories
$(eval $(call get_files,$(FOLDER_LST),%.cpp, SRC_LST))
$(eval $(call get_files,$(FOLDER_LST),%.h, HDR_LST))
$(eval $(call get_files,$(FOLDER_LST),%.s, ASM_LST))
SRC_LST:=$(subst //,/,$(SRC_LST))
HDR_LST:=$(subst //,/,$(HDR_LST))
ASM_LST:=$(subst //,/,$(ASM_LST))
SRC_LST:=$(call uniq,$(SRC_LST))
HDR_LST:=$(call uniq,$(HDR_LST))
ASM_LST:=$(call uniq,$(ASM_LST))
# Get list of sources file name only
SRC:=$(notdir $(SRC_LST))
ASM:=$(notdir $(ASM_LST))


# Include search paths for making process
INC_FOLDER := $(sort $(dir $(HDR_LST)))
VPATH := $(sort $(dir $(SRC_LST)))
VPATH += $(INC_FOLDER)
VPATH:=$(subst $(SPACE_LITERAL),:,$(VPATH))

# Get list of expected objects
OBJ_LST:=$(SRC:%.cpp=$(OBJ_FOLDER)/%.o)
OBJ:=$(notdir $(OBJ_LST))

# Get list of expected dependencies
DEP_LST:=$(SRC:%.c=$(DEP_FOLDER)/%.d)

NEEDED_FOLDER:= $(OBJ_FOLDER) $(DEP_FOLDER)

#Compiler variables
CC:=g++
OTIMIZATION:=-O0 -Wl
GDBDEBUG:= -g3 -ggdb
CFLAGS:=$(foreach header_dir,$(INC_FOLDER),-I$(header_dir) )
CFLAGS+=$(OPTIMIZATION) $(GDBDEBUG) -std=c++14

DEPFLAGS+=$(foreach header_dir,$(INC_FOLDER),-I$(header_dir) ) -MM

# Linker variables
LKER:=g++
LIB_FOLDER:=
LDFLAGS:=
LIBS:=

OUTPUT:=learn_cpp
BIN_MAP:=


# Get lib folders
LIB_FOLDER =$(dir $(shell find $(TOP_FOLDER) -name LIBS.lib))
LIB_FOLDER:=$(LIB_FOLDER:/=)
$(eval $(call get_all_folders, $(LIB_FOLDER), LIB_FOLDER_LST))
LIB_FOLDER_LST+=$(LIB_FOLDER)
LDFLAGS+=$(addprefix -L,$(LIB_FOLDER_LST))
LDFLAGS+=$(addprefix -l,$(LIBS))


GET_SIZE:=arm-none-eabi-size


