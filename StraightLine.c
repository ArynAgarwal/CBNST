#include<stdio.h>


int main(){
int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);

	float x[n],tx=0;
	float y[n],ty=0;
	printf("Enter the values of x array: ");
	for(int i=0 ;i<n;i++){
		scanf("%f",&x[i]);
		tx = tx + x[i];
	}

	printf("Enter the values of y array: ");
	for(int i=0 ;i<n;i++){
		scanf("%f",&y[i]);
		ty = ty + y[i];
	}

	float xy[n],txy=0;
	for(int i=0 ;i<n;i++){
		xy[i] = x[i] * y[i];
		txy = txy + xy[i];
	}

	float x2[n],tx2=0;
	for(int i=0;i<n;i++){
		x2[i] = x[i] * x[i];
		tx2 = tx2 +x2[i];
	}

	float a = ((tx2 * ty) - (txy * tx))/((n * tx2) - ((tx) * (tx)));

	float b = ((n * txy) - (tx * ty))/((n * tx2) - ((tx) * (tx)));

	printf("The final values of a = %f and b = %f\n",a,b);

	return 0;
}
