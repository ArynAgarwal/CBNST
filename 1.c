#include<stdio.h>

static double x = 1.734592;
static double xr = 1.7346;

double absoE(double a,double b){
	double Ea = a-b;
	if(Ea<0){
		Ea = -Ea;
	}
	return Ea;
}

double relaE(double a,double c){
	return c/a;
}

double percE(double d){
	return d*100;
}
int main(){
	printf("x= %lf \nx'= %lf \n",x,xr);
	printf("Absolute Error= %8f \n",absoE(x,xr));
	printf("Relative Error= %8f \n",relaE(x,absoE(x,xr)));
	printf("Percentage Error= %8f \n",percE(relaE(x,absoE(x,xr))));
	
	return 0;
}
