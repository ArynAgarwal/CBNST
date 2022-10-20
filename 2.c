#include<stdio.h>

int main(){
	double x;
	int x1;
	double xt,xr;
	printf("Enter the number: ");
	scanf("%lf",&x);
	int n;
	printf("Enter the digits after the decimal: ");
	scanf("%d",&n);
	n=n+1;
	int x2 = x;
	
	x1 = x2 * 10^n;
	
	xt = x1/10;
	printf("Truncated value is : %d",xt/(10^(n-1)));
	
	if(x1%10>=5){
		xr = (x1/10)+1;
	}
	else{
		xr = x1/10;
	}
	printf("Round-off value is : %d",xr/(10^(n-1)));
	
	double absoE(double a,double b){
		double Ea = fabs(a-b);
		
		return Ea;
	}
	
	double relaE(double a,double c){
		return c/a;
	}
	
	double percE(double d){
		return d*100;
	}

	printf("x= %9.6f \nTruncated x'= %9.6f \nRound-off x'=%9.6f",x,xt,xr);
	printf("Truncated Absolute Error= %8f \n",absoE(x,xt));
	printf("Round-off Absolute Error= %8f \n",absoE(x,xr));
	printf("Truncated Relative Error= %8f \n",relaE(x,absoE(x,xt)));
	printf("Round-off Relative Error= %8f \n",relaE(x,absoE(x,xr)));
	printf("Truncated Percentage Error= %8f \n",percE(relaE(x,absoE(x,xt))));
	printf("Round-off Percentage Error= %8f \n",percE(relaE(x,absoE(x,xr))));
	
	return 0;
}
