#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) (7+log(x))/2

int main(){
    int count=0;
    int a,b;
    scanf("%d %d",&a,&b);
    float x0 = (a+b)/2;
    float x1;
    x1=x0;
    do{
        count++;
        x0=x1;
        x1=f(x0);
    }
    while(fabs(x1-x0)>0.001);
    
    printf("Root %.5f obtained at %d th iteration ",x1,count);
}
