#ifndef __header_h__
#define __header_h__

typedef struct calculator
{
    /**
     * @brief structure for defining variables
     * 
     */
    float num1;
    float num2;
}calculator;

typedef struct dt
{
    /**
     * @brief structure for defining single variable
     * 
     */
    float n1;
}dt;

typedef enum verify{
    /**
     * @brief enum for returning the result
     * 
     */
    ERROR_DIV_ZERO=-2,
    ERROR_NULL_PTR=-1,
    SUCCESS=0
}verify;

typedef struct result{
    /**
     * @brief structure for returning the result
     * 
     */
    float final_ans;
}result;


void calc(void);

verify calc_add(calculator number1,result* res);
verify calc_sub(calculator number1,result* res);
verify calc_mul(calculator number1,result* res);
verify calc_div(calculator number1,result* res);
verify calc_power(calculator number1,result* res);
verify calc_square(dt n1,result* ans);
#endif
