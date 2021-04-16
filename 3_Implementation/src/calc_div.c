#include<stdio.h>
#include "header.h"

/**
 * @brief returns division of two numbers
 * 
 * @param number1 
 * @param res 
 * @return verify 
 */
verify calc_div(calculator number1,result* res)
{
    if(number1.num1==0 || number1.num2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    res->final_ans=number1.num1/number1.num2;
    return SUCCESS;
    }
}
