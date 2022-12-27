#include<stdio.h>
#include<math.h>
#include<conio.h>

float findValueAt(float x)
{
    return exp(pow(x,3));//sin(pow(x,1/2));//1/(1+x*x);
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    //The initial Position (0) is treated as Even position
    int position_of_term=1;
    //Input
    printf("Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("Enter no. of Intervals\n");
    scanf("%d",&n);

    h=(b-a)/n;
    float x[n+1],y[n+1];
    for(int i=0;i<n+1;i++){
        x[i]=a + i*h;
    }
    for(int i=0;i<n+1;i++){
        y[i] = findValueAt(x[i]);
        printf("%0.7f, ",y[i]);
    }
    sum = y[0] + y[n];
    for(int i=1;i<n;i++){
        if(i%2==0){
            sum = sum + 2*y[i];
        }
        else
            sum = sum + 4*y[i];
    }
    sum = (h * sum)/3;
    //Print the Output
    printf("\nValue of The integral  = %0.7f",sum);

}
