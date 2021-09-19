include Make_functions.mk
include Make_variables.mk
.PHONY: all clean make_dir linking start_up_obj

all: linking
	@echo "complete building...";

linking: $(DEP_LST) $(OBJ_LST)
	@echo "=================================";\
	echo "linking....";\
	echo "making bin to $(BIN_FOLDER)";\
	$(info ${OBJ_LST})
	$(LKER) $(LDFLAGS) -o $(BIN_FOLDER)/$(OUTPUT) $(OBJ_LST)

make_dir:
	@mkdir -p $(DEP_FOLDER) $(OBJ_FOLDER) $(BIN_FOLDER);

clean:
	@echo "cleaning deps...";\
	rm -f $(DEP_FOLDER)/*;\
	echo "cleaning objs...";\
	rm -f $(OBJ_FOLDER)/*;\
	echo "cleaning bin...";\
	rm -f $(BIN_FOLDER)/*;


$(DEP_LST):|make_dir


$(DEP_FOLDER)/%.d: %.cpp
	$(create_d)

ifneq ($(MAKECMDGOALS),clean)
-include $(SRC:%.cpp=$(DEP_FOLDER)/%.d)
endif

