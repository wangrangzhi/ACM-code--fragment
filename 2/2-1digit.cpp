#include <stdio.h>
#include <math.h>

int main(){

	int a, num;
	num = 0;
	scanf("%d", &a);
	while(a>10)
	{
		a/=10;
		num++;
	}
	num++;
	printf("%d", num);

	return 0;	
}