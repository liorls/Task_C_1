#include <stdio.h>
#include "myMath.h"

int main(int argc, char const *argv[])
{

double input;
printf("Please inset a real number: ");
scanf("%lf",&input);

//f(x) = e^x + x^3 − 2
float f1 = sub(add(Exp(input),Pow(input,3)),2);
printf("The value of f(x) = e^x + x^3 − 2 at the point %.4f is: %.4f",input,f1);

//f(x) = 3x + 2X^2
float f2 = add(mul(3,(double)input),Pow(mul(2,(double)input),2));
printf("The value of f(x) = 3x + 2X^2 at the point %.4f is: %.4f",input,f2);

//f(x) = (4x^3)/5 -2x 
float f3 = sub(div(Pow(mul(4,(double)input),3),5),mul(2,(double)input));
printf("The value of f(x) = (4x^3)/5 -2x at the point %.4f is: %.4f",input,f3);

return 0;
}
