#ifndef __header_h__
#define __header_h__

typedef struct calculator
{
    /**
     * @brief structure for calculator operations
     * 
     */
    float number_1;
    float number_2;
} calculator;

typedef struct result
{
    /**
     * @brief structure for result
     * 
     */
    float final_answer;
    
}result;

typedef struct calculator_single
{
    /**
     * @brief strcture for calculating single value
     * 
     */
    float number_1;
}calculator_single;

typedef enum error
{
    /**
     * @brief Enum for unit testing the functions
     * 
     */
    SUCCESS=1,
    FAIL=0,
    ERROR_DIV_ZERO=-1
}error;

enum assigning
{
    /**
     * @brief Assigning values to the variables
     * 
     */

    ADD=1,
    SUB=2,
    MUL=3,
    DIV=4,
    POWER=5,
    SQUARE=6,
    EXIT=7
};





void cal(void);

error add(calculator n,result* answer);
error sub(calculator n,result* answer);
error mul(calculator n,result* answer);
error div(calculator n,result* answer);
error power(calculator n,result* answer);
error square(calculator_single n,result* answer);
#endif