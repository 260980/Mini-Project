#include<stdio.h>
#include "header.h"

/**
 * @brief returns subtraction of two numbers
 * 
 * @param number1 
 * @param number2 
 * @param res 
 * @return verify 
 */

verify calc_sub(calculator number1,calculator number2,result* res)
{
    res->final_ans=number1.num1-number2.num2;
    return SUCCESS;
}