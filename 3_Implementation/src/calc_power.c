#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief returns power of a number
 * 
 * @param number1 
 * @param number2 
 * @param res 
 * @return verify 
 */
verify calc_power(calculator number1,calculator number2,result* res)
{
    res->final_ans=pow(number1.num1,number2.num2);
    return SUCCESS;
}