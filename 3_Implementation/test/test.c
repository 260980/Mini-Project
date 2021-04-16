#include<stdio.h>
#include "header.h"
#include "unity.h"
#include<math.h>
#include<stdlib.h>

calculator number1;
dt n1;

static result res={0};

void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_calc_add(void)
{
    /**
     * @brief  test case for addition
     * 
     */
    number1.num1=30;
    number1.num2=20;
    TEST_ASSERT_EQUAL(SUCCESS,calc_add(number1,&res));
	TEST_ASSERT_EQUAL(50,res.final_ans);

   
   /**
    * @brief test case for addition
    * 
    */
    number1.num1=50;
    number1.num2= -5;
    TEST_ASSERT_EQUAL(SUCCESS,calc_add(number1,&res));
	TEST_ASSERT_EQUAL(45,res.final_ans);

}


void test_calc_sub(void)
{
    /**
     * @brief test case for substraction
     * 
     */
    number1.num1=30;
    number1.num2=20;
    TEST_ASSERT_EQUAL(SUCCESS,calc_sub(number1,&res));
	TEST_ASSERT_EQUAL(45,res.final_ans);

    /**
     * @brief test case for substraction
     * 
     */
    number1.num1=10;
    number1.num2=-5;
    TEST_ASSERT_EQUAL(SUCCESS,calc_sub(number1,&res));
	TEST_ASSERT_EQUAL(15,res.final_ans);

}

void test_calc_mul(void)
{
    /**
     * @brief test case for multiplication
     * 
     */
    number1.num1=20;
    number1.num2=30;
    TEST_ASSERT_EQUAL(SUCCESS,calc_mul(number1,&res));
	TEST_ASSERT_EQUAL(600,res.final_ans);

    /**
     * @brief test case for multiplication
     * 
     */
    number1.num1=-20;
    number1.num2=-15;
    TEST_ASSERT_EQUAL(SUCCESS,calc_mul(number1,&res));
	TEST_ASSERT_EQUAL(300,res.final_ans);

}

void test_calc_div(void)
{
    /**
     * @brief test case for divison
     * 
     */
    
    number1.num1=159;
    number1.num2=3;
    TEST_ASSERT_EQUAL(SUCCESS,calc_div(number1,&res));
	TEST_ASSERT_EQUAL(53,res.final_ans);
    
    /**
     * @brief test case for divison
     * 
     */
    
    number1.num1=318096;
    number1.num2=24;
    TEST_ASSERT_EQUAL(SUCCESS,calc_div(number1,&res));
	TEST_ASSERT_EQUAL(13254,res.final_ans);

}

void test_calc_power(void)
{
    /**
     * @brief test case for power
     * 
     */
    
    number1.num1=24;
    number1.num2=3;
    TEST_ASSERT_EQUAL(SUCCESS,calc_power(number1,&res));
	TEST_ASSERT_EQUAL(13824,res.final_ans);

    /**
     * @brief test case for power
     * 
     */
    
    number1.num1=222;
    number1.num2=3;
    TEST_ASSERT_EQUAL(SUCCESS,calc_power(number1,&res));
	TEST_ASSERT_EQUAL(10941048,res.final_ans);
   
}

void test_calc_square(void)
{
    /**
     * @brief test case for square root
     * 
     */
    
    n1.n1=576;
    TEST_ASSERT_EQUAL(SUCCESS,calc_square(n1,&res));
	TEST_ASSERT_EQUAL(24,res.final_ans);
    
    /**
     * @brief test case for square root
     * 
     */
    
    n1.n1=3844;
    TEST_ASSERT_EQUAL(SUCCESS,calc_square(n1,&res));
	TEST_ASSERT_EQUAL(62,res.final_ans);
 
}

int main()
{
	/**
	 * @brief Construct a new unity begin object
	 * 
	 */
	UNITY_BEGIN();
    RUN_TEST(test_calc_add);
    RUN_TEST(test_calc_sub);
    RUN_TEST(test_calc_mul);
    RUN_TEST(test_calc_div);
    RUN_TEST(test_calc_power);
    RUN_TEST(test_calc_square);
	return UNITY_END();
}
