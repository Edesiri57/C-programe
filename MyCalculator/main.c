#include <stdio.h>

int main()
{
    int num1,num2;
    int result;
    char selection;

    printf("**** SAMPLE CALCULATOR *******\n\n");

    printf("+, Addition\n");
    printf("*, Multiplication\n");
    printf("/, Division\n");
    printf("-,Subtraction \n\n");
   do
   {
    
    printf("\n\nInput a number: ");
    scanf("%d", &num1);
    printf("Select and operator (+,*,/,-): ");
    scanf("%s", &selection );
    if(selection == 'X'){
        break;
    }
    printf("\n\nInput a number: ");
    scanf("%d", &num2);

    switch (selection)
    {
    case '+':
    result = num1 + num2;
    printf("%d + %d = %d ", num1, num2, result);
        break;
    case '*':
    result = num1 * num2;
        printf("%d * %d = %d ", num1, num2, result);
        break;
    case '/':
    result = num1 / num2;
        printf("%d / %d = %d ", num1, num2, result);
        break;
    case '-':
    result = num1 - num2;
        printf("%d - %d = %d ", num1, num2, result);
        break;
        
    default:
    printf("Invalid Operation");
        break;
    }

    printf("\n\nInput a number: ");
    scanf("%d", &num2);

    switch (selection)
    {
    case '+':
    result = num1 + num2;
    printf("%d + %d = %d", num1, num2, result);
        break;
    case '*':
    result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
        break;
    case '/':
    result = num1 / num2;
        printf("%d / %d = %d", num1, num2, result);
        break;
    case '-':
    result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
        break;
        
    default:
    printf("Invalid Operation");
        break;
    }

    
   } while (1);
   

    return 0;


}


