/*
#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double num = a/(double)b;
	printf("%.clf", num);	
	return 0;	
}*/

/*
   printf的特殊用法:对于m.n的格式可以用如下方法表示

    char ch[20];
    printf("%*.*s\n",m,n,ch);
    前边的*定义的是总的宽度，后边的定义的是输出的个数。分别对应外面的参数m和n 。 这种方法的好处是可以在语句之外对参数m和n赋值，从而控制输出格式。*/
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.*lf\n",c,(double)a/b);
    return 0;
}