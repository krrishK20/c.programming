#include<stdio.h>
void calcu(int* , int*);

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    calcu(&a, &b);

    return 0;
}
void calcu(int* x, int* y)
{
    char ope;

    printf("Enter the operation: ");
    scanf(" %c", &ope);
    int result;

    switch(ope)
    {
        case '+':
            result = *x + *y;
            printf("The result is: %d", result);
            break;
        case '-':
            result = *x - *y;
            printf("The result is: %d", result);
            break;
        case '*':
            result = *x * *y;
            printf("The result is: %d", result);
            break;
        case '/':
            result = *x / *y;
            printf("The result is: %d", result);
            break;
        default:
            printf("Invalid operation");

    }

}