#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int a)
{
    int result = 1;
    for (int i = 2; i <= a; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    char cont = 'N';
    do
    {
        int operation;
        float a, b;
        static float answer = 0;
        char temp[10];
        printf("************************\n");
        printf("Available Operations\n");
        printf("1.  Addition\n");
        printf("2.  Subtraction\n");
        printf("3.  Multiplication\n");
        printf("4.  Division\n");
        printf("5.  Exponent\n");
        printf("6.  Square Root\n");
        printf("7.  nth Root\n");
        printf("8.  ln\n");
        printf("9.  Factorial\n");
        printf("10. Percentage\n");
        printf("11. Sin\n");
        printf("12. Cos\n");
        printf("13. Tan\n");
        printf("************************\n");
        printf("Enter your operaion number: ");
        scanf("%d", &operation);
        printf("Enter first operand (To use previous result, enter a. To use pi, enter p. To use e, enter e): ");
        scanf("%s", temp);
        if (temp[0] == 'a')
        {
            a = answer;
        }
        else if (temp[0] == 'p')
        {
            a = 3.1415926536;
        }
        else if (temp[0] == 'e')
        {
            a = 2.7182818285;
        }
        else
        {
            a = (float)atof(temp);
        }
        if (operation == 1 || operation == 2 || operation == 3 || operation == 4 || operation == 5 || operation == 7 || operation == 10)
        {

            printf("Enter second operand (To use previous result, enter a. To use pi, enter p. To use e, enter e): ");
            scanf("%s", temp);
            if (temp[0] == 'a')
            {
                b = answer;
            }
            else if (temp[0] == 'p')
            {
                b = 3.1415926536;
            }
            else if (temp[0] == 'e')
            {
                b = 2.7182818285;
            }
            else
            {
                b = (float)atof(temp);
            }
        }
        switch (operation)
        {
        case 1:
            answer = a + b;
            printf("%.2f + %.2f = %.2f", a, b, answer);
            break;
        case 2:
            answer = a - b;

            printf("%.2f - %.2f = %.2f", a, b, answer);
            break;
        case 3:
            answer = a * b;
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case 4:
            answer = a / b;
            printf("%.2f / %.2f = %.2f", a, b, a / b);
            break;
        case 5:
            answer = pow(a, b);
            printf("%.2f ^ %.2f = %.2f", a, b, answer);
            break;
        case 6:
            answer = sqrt(a);
            printf("square root of %.2f = %.2f", a, answer);
            break;
        case 7:
            answer = pow(a, (1 / b));
            printf("%.2fth root of %.2f = %.2f", b, a, answer);
            break;
        case 8:
            answer = log(a);
            printf("ln(%.2f) = %.2f", a, answer);
            break;
        case 9:
            answer = fact((int)a);
            printf("%.0f! = %.0f", a, answer);
            break;
        case 10:
            answer = (a / 100) * b;
            printf("%.2f %% of %.2f = %.2f", a, b, answer);
            break;
        case 11:
            answer = sin(a);
            printf("sin(%.2f) = %.2f", a, answer);
            break;
        case 12:
            answer = cos(a);
            printf("cos(%.2f) = %.2f", a, answer);
            break;
        case 13:
            answer = tan(a);
            printf("tan(%.2f) = %.2f", a, answer);
            break;
        default:
            printf("Invalid operation");
            break;
        }
        printf("\n Continue Calculation? (Y/N): ");
        scanf(" %c", &cont);
    } while (cont == 'Y' || cont == 'y');
    printf("Calculation completed!");
    return 0;
}