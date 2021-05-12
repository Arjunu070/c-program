#include <stdio.h>
int main()
{
    int num1, num2;
    float avg;

    printf("First number: ");
    scanf("%d",&num1);
    printf("Second number: ");
    scanf("%d",&num2);

    avg= (float)(num1+num2)/2;

    printf("Average is "avg);
    return 0;
}