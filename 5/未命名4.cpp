#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int Mb = 0;
	while(malloc(1<<20)) ++Mb;
	printf("Allocated %d kb total\n", Mb);
	
	return 0;	
}