extern void displayDriver(char in[]) {
	// it is a pointer to where the video memory starts for colour displays
	// with VGA text mode enabled
	// here the pointer won't change but the contents can change
	char * const vid_mem = (char*) 0xb8000;
	// *out points to char *vid_mem
	char *out = vid_mem;
	// in is the input string that is supposed to print
	int i=0;
	int count = 14;
	for(i = 0;i < count; i ++) {
		out[i] = in[i];
		i++;
	}
}