#include <stdio.h>

int main(){
	int i1, i2, i3, k1, k2, k3, j1, j2, j3;
	for(int i=100; i<1000; i++)
		for(int j=100; j<1000; j++)
			for(int k=100; k<1000; k++)
			{
				if(k/i==3 && j/i==2 && k%i==0 && j%i==0)
				{
					i1=i/100, i2=i/10%10, i3=i%10;
					j1=j/100, j2=j/10%10, j3=j%10;
					k1=k/100, k2=k/10%10, k3=k%10;
					
					
					
					
				}
			}	
	return 0;	
}