#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int count = 0;
	while(a>=1)
	{
		for(int k=0; k<count; k++)
			printf(" ");
		
		for(int i=0; i < a*2-1; i++)
			printf("*");
			
		
		
		printf("\n");
		a--;
		count++;
	}
	
	
	
	
	return 0;	
}