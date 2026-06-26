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
    printf("6 - Square root\n");
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
        if (b == 0)
        printf("Error: Division by zero\n");
        else
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
        if (a < 0)
        printf("Error: Negative number\n");
        else
        printf("%10f",sqrt(a));
        break;
        case 7:
        printf("Enter number : ");
        scanf("%lf",&a);
        printf("%10f",sin(a));
        break;
        case 8:
        printf("Enter number : ");
        scanf("%lf",&a);
        printf("%10f",cos(a));
        break;
        case 9:
        printf("Enter number : ");
        scanf("%lf",&a);
        printf("%10f",tan(a));
        break;
        case 10:
        printf("Enter number : ");
        scanf("%lf",&a);
        printf("%10f",log10(a));
        break;
        case 11:
        printf("Enter number : ");
        scanf("%lf",&a);
        if (a <= 0)
        printf("Error: Log undefined\n");
        else
        printf("%10f",log(a));
        break;
        default:
        break;
}
}