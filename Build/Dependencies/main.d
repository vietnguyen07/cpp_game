./Objects/main.o: ../Code/Src/main.cpp ../Code/Hdr/main.h ../Code/Hdr/human.h \
 ../Code/Hdr/common.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/main.d : ../Code/Src/main.cpp ../Code/Hdr/main.h ../Code/Hdr/human.h \
 ../Code/Hdr/common.h
	 $(create_d)
