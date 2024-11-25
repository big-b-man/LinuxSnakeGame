#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function for delaying in seconds
void delaySeconds(double number_of_seconds) {
    // Convert seconds to clock ticks
    clock_t start_time = clock();
    clock_t end_time = start_time + (clock_t)(number_of_seconds * CLOCKS_PER_SEC);

    // Wait until the required time has passed
    while (clock() < end_time)
        ;
}

int main(){
	for(int i = 0; i <= 100; i++){
		printf("%i",i);
		fflush(stdout);
		delaySeconds(.1);
		printf("\r\x1B[2K");
	}
	return 0;
}
