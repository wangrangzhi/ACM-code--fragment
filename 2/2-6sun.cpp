#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	double sum = 0;
	while(a<=b)
	{
		sum += 1.0/a/a; //����˷���� 
		a++;
		
	}
	printf("%.5lf", sum);
	
	return 0;	
}