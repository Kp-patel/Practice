#include<stdio.h>
void main()
{
    int a, b , temp;
    printf("Enter the value of A & B:");
    scanf("%d%d",&a,&b);
    printf("Before value swapping value A is %d & value of B is:%d", a, b);
    temp = a;
    b = a + b;
    a = b - a;
    b = temp;
    printf("\n After swapping value of A is %d and B is %d", a, b);
}
