#include <stdio.h>
#include <conio.h>

float funct(float x, float y) {
    return (x + y);
}

int main() {
    float x, y, h, xn, k, n;
    printf("Enter x0, y0, h, xn: ");
    scanf("%f %f %f %f", &x, &y, &h, &xn);
    n = (xn - x) / h;
    // printf("x0 = %f\n", x);
    // printf("y0 = %f\n", y);
    // printf("h = %f\n", h);
    // printf("xn = %f\n",xn);
    printf("n = %f\n", n);
    for(int i = 0; i < n; i += 1)
    {
        k = h*funct(x,y);
        y = y + k;
        x = x + h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}
