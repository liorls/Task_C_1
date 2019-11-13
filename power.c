#include "myMath.h"
/*
Include of myMath file headers
*/


double Exp(int x){
double expo=2.71828;
double temp=1;
for (int i = 0; i < x; i++)
{
    temp=temp*expo;
}
return temp;
}


double Pow(double x , int y){

double result =1;
    for (int  i = 0; i < y; i++)
    {
        result=result*x;
    }
    return result ;  
}
