./Objects/main.o: ../Code/Src/main.cpp ../Code/Hdr/main.h ../Code/Hdr/human.h \
 ../Code/Hdr/common.h ../Code/Hdr/human_female.h ../Code/Hdr/human.h \
 ../Code/Hdr/idSystem.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/main.d : ../Code/Src/main.cpp ../Code/Hdr/main.h ../Code/Hdr/human.h \
 ../Code/Hdr/common.h ../Code/Hdr/human_female.h ../Code/Hdr/human.h \
 ../Code/Hdr/idSystem.h
	 $(create_d)
