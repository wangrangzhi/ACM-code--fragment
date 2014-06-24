#include <stdio.h>

int main(){
	
	int c;
	while((c = getchar()) != EOF)
	{
		if(c== '\n')
		{
			putchar('\n');
		}else
		{
			putchar(c-7);
		}
	}
	
	return 0;	
}