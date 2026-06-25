#include <stdio.h>
int main(){
    printf("Basic calculator\n");
    float a;
    printf("Enter first number : ");
    scanf("%f",&a);
    float b;
    printf("Enter second number : ");
    scanf("%f",&b);
    char op;
    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c", &op);
    switch(op)
    {
    case '+':
        printf("Sum : %f\n",a + b);
        break;
    case '-':
        printf("Difference : %f\n",a - b);
        break;
    case '*':
        printf("Product : %f\n",a*b);
        break;
    case '/':
        printf("Quotient : %f\n",a / b);
        break;
    default:
        break;
    }
    return 0;
}