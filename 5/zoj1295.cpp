#include <stdio.h>
#include <string.h>
char a[101];

int main(){
	
	int n;
	scanf("%d\n", &n);
	
	
	while(n--)
	{
		
		gets(a);
		//scanf("%s", a);
		int len = strlen(a);
		
		for(int i=len-1; i>=0; i--)
		{
			printf("%c", a[i]);
		}
		printf("\n");
	}
		
	return 0;	
}

