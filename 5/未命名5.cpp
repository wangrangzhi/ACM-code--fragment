#include"stdio.h"//这个头文件包含gets()函数
int main(void)
{
char str1[5];
gets(str1);
printf("%s\n",str1);
return 0;
}