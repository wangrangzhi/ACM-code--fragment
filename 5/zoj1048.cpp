#include <stdio.h>
#include <string.h>

int main(){

	double a[12];
	int n = 0;
	memset(a, 12, sizeof(a));
	
	
	
	double sum = 0.0;
	for(int i=0; i<12; i++)
	{
		scanf("%lf", &a[n]);
		sum+=a[n];
	}
	 
 	
 	printf("$%.2f", sum/12);
	
	return 0;	
}