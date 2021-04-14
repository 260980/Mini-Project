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
error square(calculator_single n,result* answer)
{
    answer->final_answer=sqrt(n.number_1);
    return SUCCESS;
}