#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=10; i<100; i++)
	{
		if(i%3==a && i%5==b && i%7==c)
		{
			printf("%d", i);
			goto A;
		}	
		
	}
	printf("no answer");
	A: ;
	return 0;	
}