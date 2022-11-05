#include <stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{	
    return (float)(3*x-cos(x)-1);
}
float df(float x)
{
    return (float)(3+sin(x));
}

int main()
{
    float a=0,b=1,c,res;
    while(1)
    {
        if(f(a)<0&&f(b)>1)
        break;
        a=a+1;
        b=b+1;
    }
    c=(a+b)/2;
    printf("%f\n",c);
    while(1)
    {
        float d=c-f(c)/df(c);
        printf("%f\n",d);
        if(fabs(c-d)<0.0001)
        {
            res=c;
            break;
        }
        c=d;
    }
    printf("\n\n%f",res);
  return 0;
}

