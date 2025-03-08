#include<stdio.h>
void swap(int* , int*);
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    swap(&a, &b);
    return 0;
}
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("After swapping the number a = %d, b = %d", *x, *y);
}