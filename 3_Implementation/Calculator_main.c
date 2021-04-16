#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

static result res={0};
static calculator number1;
static dt n1;
void calc()
{
    int choice,num1,num2;
    float ok;
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
        scanf("%d",&ok);
        dt.n1=ok;
    }
    else{
        printf("Enter the values\n");
        scanf("%d %d",&num1,&num2);
        number1.num1=num1;
        number1.num2=num2;
    }
    switch(choice)
    {
        case 1:
        calc_add(number1,&res);
        printf("Addition is %.2f",res.final_ans);
        break;

        case 2:
        calc_sub(number1,&res);
        printf("Subtraction is %.2f",res.final_ans);
        break;

        case 3:
        calc_mul(number1,&res);
        printf("Multiplication is %.2f",res.final_ans);
        break;

        case 4:
        calc_div(number1,&res);
        printf("Division is %.2f",res.final_ans);
        break;

        case 5:
        calc_power(number1,&res);
        printf("Power is %.2f",res.final_ans);
        break;

        case 6:
        calc_square(n1,&res);
        printf("Square root is %.2f",res.final_ans);
        break;

        default:
        exit(0);
    }

}
