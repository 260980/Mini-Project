#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief sqrt function 
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
verify calc_square(calculator number1,result* res)
{
    res->final_ans=sqrt(number1.num1);
    return SUCCESS;
}