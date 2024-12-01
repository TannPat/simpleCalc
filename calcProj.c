#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int a) // Returns factorial of parameter
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
    char cont = 'N'; //(Boolean) for repeating program
    do
    {
        int operation;           // Stores operation to do
        float a, b;              // Stores operand(s)
        static float answer = 0; // Stores previous answer
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
        scanf("%d", &operation); // Input operation
        if (operation < 14)      // OOB Operation value
        {
            printf("Enter first operand (To use previous result, enter a. To use pi, enter p. To use e, enter e): ");
            scanf("%s", temp);  // Input first operand
            if (temp[0] == 'a') /* Input previous answer as first opernd */
            {
                a = answer;
            }
            else if (temp[0] == 'p') /* Input pi as first opernd */
            {
                a = 3.1415926536;
            }
            else if (temp[0] == 'e') /* Input e as first opernd */
            {
                a = 2.7182818285;
            }
            else
            {
                a = (float)atof(temp);
            }
            if (operation == 1 || operation == 2 || operation == 3 || operation == 4 || operation == 5 || operation == 7 || operation == 10) /* Check if operation is unary */
            {

                printf("Enter second operand (To use previous result, enter a. To use pi, enter p. To use e, enter e): ");
                scanf("%s", temp);
                if (temp[0] == 'a') /* Input previous answer as first opernd */
                {
                    b = answer;
                }
                else if (temp[0] == 'p') /* Input pi as first opernd */
                {
                    b = 3.1415926536;
                }
                else if (temp[0] == 'e') /* Input e as first opernd */
                {
                    b = 2.7182818285;
                }
                else
                {
                    b = (float)atof(temp);
                }
            }
        }
        switch (operation)
        {
        case 1: /* Addition */
            answer = a + b;
            printf("%.2f + %.2f = %.2f", a, b, answer);
            break;
        case 2: /* Subtraction */
            answer = a - b;

            printf("%.2f - %.2f = %.2f", a, b, answer);
            break;
        case 3: /* Multiplication */
            answer = a * b;
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case 4: /* Division */
            answer = a / b;
            printf("%.2f / %.2f = %.2f", a, b, a / b);
            break;
        case 5: /* Exponent */
            answer = pow(a, b);
            printf("%.2f ^ %.2f = %.2f", a, b, answer);
            break;
        case 6: /* Square Root */
            answer = sqrt(a);
            printf("square root of %.2f = %.2f", a, answer);
            break;
        case 7: /* bth root of a */
            answer = pow(a, (1 / b));
            printf("%.2fth root of %.2f = %.2f", b, a, answer);
            break;
        case 8: /* Natural log */
            answer = log(a);
            printf("ln(%.2f) = %.2f", a, answer);
            break;
        case 9: /* Factorial */
            answer = fact((int)a);
            printf("%.0f! = %.0f", a, answer);
            break;
        case 10: /* a percentage of b */
            answer = (a / 100) * b;
            printf("%.2f %% of %.2f = %.2f", a, b, answer);
            break;
        case 11: /* Sine */
            answer = sin(a);
            printf("sin(%.2f) = %.2f", a, answer);
            break;
        case 12: /* Cosine */
            answer = cos(a);
            printf("cos(%.2f) = %.2f", a, answer);
            break;
        case 13: /* Tangent */
            answer = tan(a);
            printf("tan(%.2f) = %.2f", a, answer);
            break;
        default: /* OOB value for operand */
            printf("Invalid operation");
            break;
        }
        printf("\n Continue Calculation? (Y/N): ");
        scanf(" %c", &cont); /* Ask if program to be repeated */
    } while (cont == 'Y' || cont == 'y'); /* Check if program to be repeated */
    printf("Calculation completed!");
    return 0;
}
