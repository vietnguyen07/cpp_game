./Objects/human.o: ../Code/Src/human.cpp ../Code/Hdr/human.h ../Code/Hdr/common.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/human.d : ../Code/Src/human.cpp ../Code/Hdr/human.h ../Code/Hdr/common.h
	 $(create_d)
