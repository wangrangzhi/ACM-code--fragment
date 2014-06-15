#include <stdio.h>
#include <math.h>
int main(){
	
	double sum = 0;
	double add = 0;
	for(int i=1; ;i++)
	{
		
		add = 1.0/(i*2-1);
		if(fabs(add)<0.000001)
			break;
		if(i%2==1)
		{
			sum += add;
		}
		else
		{
			sum-=add;
		}
		
	}
	printf("%.9lf", sum);
	
	return 0;	
}