#include <stdio.h>


int main(){
	int n, hi,lo;
	for(int x=1; ; x++)
	{
		n = x * x;
		if(n<1000)continue;
		if(n>9999)break;
		hi = n/100;
		lo = n%100;
		if(hi/10==hi%10 && lo/10==lo%10)printf("%d\n", n);
	}
	return 0;	
}
