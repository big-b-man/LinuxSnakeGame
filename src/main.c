#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delaySeconds(double time){
	clock_t start_time = clock();
	while(clock() < (start_time + (int)(time*1000000)));
}

int main(){
	for(int i = 0; i <= 100; i++){
		printf("%i",i);
		delaySeconds(.1);
		printf("\x1B[2k\r");
	}
	return 0;
}
