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
   printf�������÷�:����m.n�ĸ�ʽ���������·�����ʾ

    char ch[20];
    printf("%*.*s\n",m,n,ch);
    ǰ�ߵ�*��������ܵĿ�ȣ���ߵĶ����������ĸ������ֱ��Ӧ����Ĳ���m��n �� ���ַ����ĺô��ǿ��������֮��Բ���m��n��ֵ���Ӷ����������ʽ��*/
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.*lf\n",c,(double)a/b);
    return 0;
}