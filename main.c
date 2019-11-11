#include <stdio.h>
#include "myMath.h"






int main(int argc, char const *argv[])
{

double input;
printf("Please inset a real number: ");
scanf("%lf",&input);

float f1=sub(add(Exp(input),Pow(input,3)),2);
printf("The value of f(x) = e^x + x^3 − 2 at the point %.4f is: %.4f",input,f1);

return 0;
}
