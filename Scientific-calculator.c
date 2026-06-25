#include <stdio.h>
#include <math.h>
int main(){
    double a,b;
    printf("Scientific calculator\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Power\n");
    printf("6 - Square route\n");
    printf("7 - Sine\n");
    printf("8 - Cosine\n");
    printf("9 - Tangent\n");
    printf("10 - Logarithm\n");
    printf("11 - Natural log\n");
    int choice;
    printf("Enter choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter first and second number : ");
        scanf("%lf %lf",&a,&b);
        printf("Sum : %10f\n",a + b);
        break;
        case 2 :
        printf("Enter first and second number : ");
        scanf("%lf %lf",&a,&b);
        printf("Difference : %10f\n",a - b);
        break;
        case 3:
        printf("Enter first and second number : ");
        scanf("%lf %lf",&a,&b);
        printf("Product : %10f\n",a * b);
        break;
        case 4:
        printf("Enter first and second number : ");
        scanf("%lf %lf",&a,&b);
        printf("Quotient : %10f\n",a / b);
        break;
        case 5:
        printf("Enter number and power : ");
        scanf("%lf %lf",&a,&b);
        printf("%10f\n",pow(a,b));
        break;
        case 6:
        printf("Enter number : ");
        scanf("%lf",&a);
        printf("%10f",sqrt(a));
        break;
}
}