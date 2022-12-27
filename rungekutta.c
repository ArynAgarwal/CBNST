#include<stdio.h>
#include<stdlib.h>

/*
float num(float x , float x0; float h ){
float f = 0;
f = (x - x0)/h;
return f;
}
*/
float func(float x,float y){

return x + y;
}

/*
float k1(float x, float y,float h){
float k=0;
k= h * func(x,y);
return k;
}

float k2(float x, float y,float h, float k1){
float k=0;
k= h * func(x+(h/2),y+(k1/2));
return k;
}

float k3(float x, float y,float h,float k2){
float k=0;
k= h * func(x+(h/2),y+(k2/2));
return k;
}

float k4(float x, float y,float h, float k3){
float k=0;
k= h * func(x+h,y+k3);
return k;
}
*/
int main(){
	float x0,y0;
	printf("Enter the values of x0 and y0 : ");
	scanf("%f %f",&x0, &y0);

	float h;
	printf("Enter the value of h: ");
	scanf("%f",&h);

 	float x;
	printf("Enter the value of x at which y is to be calculated: ");
	scanf("%f",&x);

 	int n =0;
 	n = (x - x0)/h;

 	 //printf("")
 	float y1 =0;

 	for(int i=0;i<n;i++){

 		float onek = h * func(x0,y0);
 		float twok = h * func(x0+(h/2),y0+(onek/2));
 		float threek =  h * func(x0+(h/2),y0+(twok/2));
 		float fourk = h * func(x0+h,y0+threek);
 		y1 = y0 + (onek + 2* twok + 2* threek + fourk)/6;

 		printf("The value of y at x = %f  is %f , k1 = %f, k2 = %f, k3 = %f,k4 = %f\n" , x0, y1,onek,twok,threek,fourk );
 		y0 = y1;

 		x0 = x0 + h ;
 	}

 	return 0;

}
