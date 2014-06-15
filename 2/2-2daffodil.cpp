#include <stdio.h>
#include <math.h>

int main(){
	int b, s, g;
	for(int i=100; i<1000; i++)
	{
		b = i/100;
		s = (i%100)/10;
		g = i%10;
	//	printf("%d %d %d\n", b, s, g);
		if(i == (b*b*b + s*s*s + g*g*g))
			printf("%d\n", i);	
	}
	return 0;	
}