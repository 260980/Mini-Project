#include<stdio.h>
#include "header.h"

/**
 * @brief add function 
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error add(calculator n,result* answer)
{
    answer->final_answer=n.number_1+n.number_2;
    return SUCCESS;
}