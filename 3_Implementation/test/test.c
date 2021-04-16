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
     * @brief  test case for addition(Requirement)
     * 
     */
    number1.num1=30;
    number1.num2=20;
    TEST_ASSERT_EQUAL(SUCCESS,calc_add(number1,&res));
	TEST_ASSERT_EQUAL(50,res.final_ans);

   
   /**
    * @brief test case for addition(Scenario)
    * 
    */
    number1.num1=50*20;
    number1.num2= -5*20;
    TEST_ASSERT_EQUAL(SUCCESS,calc_add(number1,&res));
	TEST_ASSERT_EQUAL(900,res.final_ans);
    
    /**
     * @brief test case for addition(Boundary)
     * 
     */
    number1.num1=99999;
    number1.num2= 88888;
    TEST_ASSERT_EQUAL(SUCCESS,calc_add(number1,&res));
	TEST_ASSERT_EQUAL(188887,res.final_ans);

}


void test_calc_sub(void)
{
    /**
     * @brief test case for substraction(Requirement)
     * 
     */
    number1.num1=30;
    number1.num2=20;
    TEST_ASSERT_EQUAL(SUCCESS,calc_sub(number1,&res));
	TEST_ASSERT_EQUAL(10,res.final_ans);

    /**
     * @brief test case for substraction(Scenario)
     * 
     */
    number1.num1=10*20;
    number1.num2=-5*60;
    TEST_ASSERT_EQUAL(SUCCESS,calc_sub(number1,&res));
	TEST_ASSERT_EQUAL(500,res.final_ans);

    /**
     * @brief test case for substraction(Boundary)
     * 
     */

    number1.num1=99999;
    number1.num2=-11111;
    TEST_ASSERT_EQUAL(SUCCESS,calc_sub(number1,&res));
	TEST_ASSERT_EQUAL(111110,res.final_ans);


}

void test_calc_mul(void)
{
    /**
     * @brief test case for multiplication(Requirement)
     * 
     */
    number1.num1=20;
    number1.num2=30;
    TEST_ASSERT_EQUAL(SUCCESS,calc_mul(number1,&res));
	TEST_ASSERT_EQUAL(600,res.final_ans);

    /**
     * @brief test case for multiplication(Scenario)
     * 
     */
    number1.num1=-20+50;
    number1.num2=-15+400;
    TEST_ASSERT_EQUAL(SUCCESS,calc_mul(number1,&res));
	TEST_ASSERT_EQUAL(11550,res.final_ans);

    /**
     * @brief test case for multiplication(Boundary)
     * 
     */
    number1.num1=999;
    number1.num2=-888;
    TEST_ASSERT_EQUAL(SUCCESS,calc_mul(number1,&res));
	TEST_ASSERT_EQUAL(-887112,res.final_ans);

}

void test_calc_div(void)
{
    /**
     * @brief test case for divison(Requirement)
     * 
     */
    
    number1.num1=159;
    number1.num2=3;
    TEST_ASSERT_EQUAL(SUCCESS,calc_div(number1,&res));
	TEST_ASSERT_EQUAL(53,res.final_ans);
    
    /**
     * @brief test case for divison(Boundary)
     * 
     */
    
    number1.num1=888888;
    number1.num2=2;
    TEST_ASSERT_EQUAL(SUCCESS,calc_div(number1,&res));
	TEST_ASSERT_EQUAL(444444,res.final_ans);

}

void test_calc_power(void)
{
    /**
     * @brief test case for power(Requirement)
     * 
     */
    
    number1.num1=24;
    number1.num2=3;
    TEST_ASSERT_EQUAL(SUCCESS,calc_power(number1,&res));
	TEST_ASSERT_EQUAL(13824,res.final_ans);

    /**
     * @brief test case for power(Boundary)
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
     * @brief test case for square root(Requirement)
     * 
     */
    
    n1.n1=576;
    TEST_ASSERT_EQUAL(SUCCESS,calc_square(n1,&res));
	TEST_ASSERT_EQUAL(24,res.final_ans);

    /**
     * @brief test case for square root(Scenario)
     * 
     */
    n1.n1=576*625;
    TEST_ASSERT_EQUAL(SUCCESS,calc_square(n1,&res));
	TEST_ASSERT_EQUAL(600,res.final_ans);
    
    /**
     * @brief test case for square root(Boundary)
     * 
     */
    
    n1.n1=1234321;
    TEST_ASSERT_EQUAL(SUCCESS,calc_square(n1,&res));
	TEST_ASSERT_EQUAL(1111,res.final_ans);
 
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
