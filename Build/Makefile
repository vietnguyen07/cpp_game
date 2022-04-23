include Make_functions.mk
include Make_variables.mk
.PHONY: all clean make_dir linking start_up_obj

all: linking
	@echo "complete building...";

linking: $(DEP_LST) $(OBJ_LST)
	@echo "=================================";\
	echo "linking....";\
	echo "making bin to $(BIN_FOLDER)";\
	$(LKER) $(LDFLAGS) -o $(BIN_FOLDER)/$(OUTPUT) $(OBJ_LST)

make_dir:
	@echo "making " $(DEP_FOLDER) $(OBJ_FOLDER) $(BIN_FOLDER)
	@mkdir -p $(DEP_FOLDER) $(OBJ_FOLDER) $(BIN_FOLDER);
	
make_test: $(DEP_LST) $(OBJ_LST)
	@echo "making test"
	
	@$(eval ob_files:=$(foreach obj_file, $(OBJ_LST),$(realpath $(obj_file))))
	$(eval export LKER)
	$(eval export ob_files)
	$(eval export LDFLAGS)
	$(eval export VPATH)
	$(eval export INC_FOLDER)
	$(eval export CC)
	$(eval export CFLAGS)
	@cd ../Tests;\
	make clean; make all

clean:
	@echo "cleaning deps...";\
	rm -fr $(DEP_FOLDER)/*;\
	echo "cleaning objs...";\
	rm -fr $(OBJ_FOLDER)/*;\
	echo "cleaning bin...";\
	rm -fr $(BIN_FOLDER)/*;


$(DEP_LST):|make_dir


$(DEP_FOLDER)/%.d: %.cpp
	$(create_d)

ifneq ($(MAKECMDGOALS),clean)
-include $(SRC:%.cpp=$(DEP_FOLDER)/%.d)
endif

