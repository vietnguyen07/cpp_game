./Objects/human.o: ../Code/Src/Human/human.cpp ../Code/Hdr/human.h \
 ../Code/Hdr/common.h ../Code/Hdr/idSystem.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/human.d : ../Code/Src/Human/human.cpp ../Code/Hdr/human.h \
 ../Code/Hdr/common.h ../Code/Hdr/idSystem.h
	 $(create_d)
