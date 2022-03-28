./Objects/human_female.o: ../Code/Src/Human/human_female.cpp \
 ../Code/Hdr/human_female.h ../Code/Hdr/human.h ../Code/Hdr/common.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/human_female.d : ../Code/Src/Human/human_female.cpp \
 ../Code/Hdr/human_female.h ../Code/Hdr/human.h ../Code/Hdr/common.h
	 $(create_d)
