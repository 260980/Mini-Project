#include<stdio.h>
#include "header.h"

/**
 * @brief returns division of two numbers
 * 
 * @param number1 
 * @param number2 
 * @param res 
 * @return verify 
 */

verify calc_div(calculator number1,calculator number2,result* res)
{
    if(number1.num1==0 || number2.num2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    res->final_ans=number1.num1/number2.num2;
    return SUCCESS;
    }
}