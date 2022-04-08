.PHONY: all %.o
TST_DIR:=test_dir
TST_OBJ_DIR:=test_obj_dir
TST_SRC:=$(wildcard $(TST_DIR)/*.cpp)
TST_TARGET:=$(addprefix bin/, $(basename $(notdir $(TST_SRC))))
TST_SRC_NAME := $(notdir $(TST_SRC))
TST_OBJ_NAME = $(TST_SRC_NAME:%.cpp=$(TST_OBJ_DIR)/%.o)
SYS_OBJ:=$(filter-out %main.o, $(ob_files))
all: $(TST_OBJ_NAME) $(TST_TARGET)
	@echo "making $(TST_TARGET)"

bin/%: $(TST_OBJ_DIR)/%.o
	$(LKER) $(LDFLAGS) -o $@ $^ $(SYS_OBJ)
	
$(TST_OBJ_DIR)/%.o: test_dir/%.cpp 
	g++ $<  -c -o $@ -I$(INC_FOLDER)
	
clean:
	rm ./test_dir/*
	rm ./test_obj_dir/*