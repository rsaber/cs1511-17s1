

int is_mono(int height, int width, int pixels[height][width]){
	int i,j;
	for(i=0; i<height; i++){
		for(j=0; j<width; j++){
			if(pixels[i][j] != 0 || pixels[i][j] != 1)
				return 0; 
		}
	}
	return 1;
}
