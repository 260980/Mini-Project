#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

static result res={0};
static calculator number1;
static calculator number2;
void calc()
{
    int choice,lnum1,lnum2;
    printf("Enter your choice\n");
    printf("1.ADDITION\n  2.SUBTRACTION\n   3.MULTIPLICATION\n   4.DIVISION\n    5.POWER\n     6.SQUARE ROOT\n");
    scanf("%d",&choice);
    if(choice>6)
    {
        printf("Enter the correct choice\n");
        exit(0);
    }
    else if(choice==6)
    {
        printf("Enter the value\n");
        scanf("%d",&lnum1);
    }
    else{
        printf("Enter the values\n");
        scanf("%d %d",&lnum1,&lnum2);
        number1.num1=lnum1;
        number2.num2=lnum2;
    }
    switch(choice)
    {
        case 1:
        calc_add(number2,number2,&res);
        printf("Addition is %.2f",res.final_ans);
        break;

        case 2:
        calc_sub(number1,number2,&res);
        printf("Subtraction is %.2f",res.final_ans);
        break;

        case 3:
        calc_mul(number1,number2,&res);
        printf("Multiplication is %.2f",res.final_ans);
        break;

        case 4:
        calc_div(number1,number2,&res);
        printf("Division is %.2f",res.final_ans);
        break;

        case 5:
        calc_power(number1,number2,&res);
        printf("Power is %.2f",res.final_ans);
        break;

        case 6:
        calc_square(number1,&res);
        printf("Square root is %.2f",res.final_ans);
        break;

        default:
        exit(0);
    }

}