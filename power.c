#include "myMath.h"
/*
Include of myMath file headers
*/

double Pow(double x , int y){

double result =1;
    for (int  i = 0; i < y; i++)
    {
        result=result*x;
    }
    return result ;  
}

double Exp(int x){

return Pow(2.71828,x);
}
