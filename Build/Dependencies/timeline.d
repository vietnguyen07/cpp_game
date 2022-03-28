./Objects/timeline.o: ../Code/Src/timeline/timeline.cpp ../Code/Hdr/timeline.h
	 @echo "compiling $@";\
	 $(CC) $(CFLAGS) -c -o $@ $<


Dependencies/timeline.d : ../Code/Src/timeline/timeline.cpp ../Code/Hdr/timeline.h
	 $(create_d)
