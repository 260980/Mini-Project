#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief returns power of a given number
 * 
 * @param number1 
 * @param res 
 * @return verify 
 */

verify calc_power(calculator number1,result* res)
{
    res->final_ans=pow(number1.num1,number1.num2);
    return SUCCESS;
}
