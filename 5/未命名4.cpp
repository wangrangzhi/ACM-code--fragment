#include <stdio.h>

int main(){
	char q = 'a';
	char* p = &q;
	printf("%d", p);
	
	int apple;
	apple = sizeof (int) * p;
	printf("%d %d", sizeof(apple), apple);
	
	return 0;	
}