#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief power function
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
error power(calculator n,result* answer)
{
    answer->final_answer=pow(n.number_1,n.number_2);
    return SUCCESS;
}