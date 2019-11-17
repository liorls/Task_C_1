#include <stdio.h>
#include "myMath.h"

int main(int argc, char const *argv[])
{

double input;
printf("Please inset a real number: ");
scanf("%lf",&input);

//f(x) = e^x + x^3 − 2

float f1 = sub(add((float)Exp((int)input),(float)Pow(input,3)),(float)2);
printf("The value of f(x) = e^x + x^3 − 2 at the point %.4f is: %.4f \n",input,f1);

//f(x) = 3x + 2X^2
float f2 = add((float)mul(input,3),(float)Pow(mul(input,2),2));
printf("The value of f(x) = 3x + 2X^2 at the point %.4f is: %.4f \n",input,f2);

//f(x) = (4x^3)/5 -2x 
float f3 = sub((float)div(Pow(mul(input,4),3),5),(float)mul(input,2));
printf("The value of f(x) = (4x^3)/5 -2x at the point %.4f is: %.4f \n",input,f3);

return 0;
}
