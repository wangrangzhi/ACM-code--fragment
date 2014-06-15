#include <stdio.h>
#include <math.h>
int main()
{
       int t=-1;
       double a=1.0,sum=1.0;
       while(fabs(a)>=0.000001)
       {
              a=1.0/(a+2);
              a=a*t;
              sum=sum+a;
              t=t*(-1);
       }
       printf("%.9lf\n",sum);
       return 0;
}