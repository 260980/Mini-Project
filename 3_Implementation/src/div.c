#include<stdio.h>
#include "header.h"

/**
 * @brief div function
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error div(calculator n,result* answer)
{
    if(n.number_1==0 || n.number_2==0)
    {
       
        return ERROR_DIV_ZERO;
    }
    else
    {
    answer->final_answer=n.number_1/n.number_2;
    return SUCCESS;
    }
}