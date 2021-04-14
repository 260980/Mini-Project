#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>



static result answer={0};
void cal()
{
    /**
     * @brief arthmetic function to perfrom required  operations
     * 
     */
     calculator value;
     calculator_single value_sin;
    
    int choice=-1;
    int local_value1,local_value2;
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison\n5. Power\n6.Square Root\n7. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=7)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==7)
        {
            exit(0);
        }
        else if(choice==6){
            printf("\nEnter the value \n");
            scanf("%d",&local_value1);
            value_sin.number_1=local_value1;

        }
        printf("\nEnter the values two values with space \n");
        scanf("%d %d",&local_value1,&local_value2);
        value.number_1=local_value1;
        value.number_2=local_value2;
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case ADD:
            add(value,&answer);
            printf("\nThe Sum is : %.2f",answer.final_answer);
            printf("\n");
            break;

            

            case SUB:
            sub(value,&answer);
            printf("\nThe subtraction is: %.2f",answer.final_answer);
            printf("\n");
            break;

            case MUL:
            mul(value,&answer);
            printf("\nThe Multiplication is: %.2f",answer.final_answer);
            printf("\n");
            break;

            case DIV:
            div(value,&answer);
            printf("\nThe Divison is: %.2f",answer.final_answer);
            printf("\n");
            break;

            case POWER:
            power(value,&answer);
            printf("\nThe Power is: %.2f",answer.final_answer);
            printf("\n");
            break;

            case SQUARE:
            square(value_sin,&answer);
            printf("\nThe Square Root is: %.2f",answer.final_answer);
            printf("\n");
            break;

            case EXIT:
            printf("\nClosing the application...\n");
            exit(0);
            break;

            default:
            exit(0);

        }
    }
    else
    {
        printf("\n Wrong choice, Try again\n");
    }
    
}