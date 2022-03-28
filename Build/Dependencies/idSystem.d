./Objects/idSystem.o: ../Code/Src/idSystem/idSystem.cpp ../Code/Hdr/idSystem.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/idSystem.d : ../Code/Src/idSystem/idSystem.cpp ../Code/Hdr/idSystem.h
	 $(create_d)
