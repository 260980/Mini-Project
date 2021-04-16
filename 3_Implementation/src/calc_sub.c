#include<stdio.h>
#include "header.h"

/**
 * @brief returns subtraction of two  numbers
 * 
 * @param number1 
 * @param res 
 * @return verify 
 */

verify calc_sub(calculator number1,result* res)
{
    res->final_ans=number1.num1-number1.num2;
    return SUCCESS;
}
