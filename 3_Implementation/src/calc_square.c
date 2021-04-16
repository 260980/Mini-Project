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
verify calc_square(dt n1,result* res)
{
    res->final_ans=sqrt(n1.n1);
    return SUCCESS;
}
