./Objects/human_male.o: ../Code/Src/Human/human_male.cpp ../Code/Hdr/human_male.h \
 ../Code/Hdr/human.h ../Code/Hdr/common.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/human_male.d : ../Code/Src/Human/human_male.cpp ../Code/Hdr/human_male.h \
 ../Code/Hdr/human.h ../Code/Hdr/common.h
	 $(create_d)
