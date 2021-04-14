#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calculator value;
calculator_single value_sin;
static result answer={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_add(void)
{
    /**
     * @brief  test case for addition
     * 
     */
    value.number_1=30;
    value.number_2=20;
    add(value,&answer);
	TEST_ASSERT_EQUAL(50,answer.final_answer);

  
   
   
   /**
    * @brief test case for addition
    * 
    */
    value.number_1=50;
    value.number_2= -5;
    add(value,&answer);
    TEST_ASSERT_EQUAL(45,answer.final_answer);

}

void test_sub(void)
{
    /**
     * @brief test case for substraction
     * 
     */
    value.number_1=30;
    value.number_2=20;
    sub(value,&answer);
	TEST_ASSERT_EQUAL(10,answer.final_answer);


    /**
     * @brief test case for substraction
     * 
     */
    value.number_1=10;
    value.number_2=-5;
    sub(value,&answer);
	TEST_ASSERT_EQUAL(15,answer.final_answer);



}

void test_mul(void)
{
    /**
     * @brief test case for multiplication
     * 
     */
    value.number_1=20;
    value.number_2=30;
    mul(value,&answer);
	TEST_ASSERT_EQUAL(600,answer.final_answer);

    /**
     * @brief test case for multiplication
     * 
     */
    value.number_1=-20;
    value.number_2=-15;
    mul(value,&answer);
	TEST_ASSERT_EQUAL(300,answer.final_answer);

}

void test_div(void)
{
    /**
     * @brief test case for divison
     * 
     */
    
    value.number_1=159;
    value.number_2=3;
    div(value,&answer);
	TEST_ASSERT_EQUAL(53,answer.final_answer);


    /**
     * @brief test case for divison
     * 
     */
    
    value.number_1=318096;
    value.number_2=24;
    div(value,&answer);
	TEST_ASSERT_EQUAL(13254,answer.final_answer);


}

void test_power(void)
{
    /**
     * @brief test case for power
     * 
     */
    
    value.number_1=24;
    value.number_2=3;
    power(value,&answer);
	TEST_ASSERT_EQUAL(13824,answer.final_answer);

    /**
     * @brief test case for divison
     * 
     */
    
    value.number_1=222;
    value.number_2=3;
    power(value,&answer);
	TEST_ASSERT_EQUwerAL(10941048,answer.final_answer);


}

void test_square(void)
{
    /**
     * @brief test case for divison
     * 
     */
    
    value_sin.number_1=576;
    square(value_sin,&answer);
	TEST_ASSERT_EQUAL(24,answer.final_answer);


    /**
     * @brief test case for divison
     * 
     */
    
    value_sin.number_1=3844;
    square(value_sin,&answer);
	TEST_ASSERT_EQUAL(62,answer.final_answer);


}
int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
	UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_power);
    RUN_TEST(test_square);
	return UNITY_END();
}