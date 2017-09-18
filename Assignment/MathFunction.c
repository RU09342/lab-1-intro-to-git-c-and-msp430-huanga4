#include <stdio.h>

int Math(int, int, char);
int main()
{
    printf("Hello World!\n");
    printf("%i", Math(1, 2, '+'));
    printf("\n");
    printf("%i", Math(3, 3, '-'));
    printf("\n");
    printf("%i", Math(3, 9, '*'));
    printf("\n");
    printf("%i", Math(4, 2, '/'));
    printf("\n");
    printf("%i", Math(5, 2, '%'));
    return 0;
}

/**
 * Performs basic math functions (addition, subtraction, multiplication, division, modulo)
 * @param number1 - first number
 * @param number2 - second number
 * @param operator - operation to be done
 * @return the result of the operation
 * */
int Math(int number1, int number2, char operator)
{
    int result = 0;
    switch(operator){
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            result = number1/number2;
            break;
        case '%':
            result = number1 % number2;
            break;
        default:
            printf("ERROR");
            break;
    }
    return result;
}