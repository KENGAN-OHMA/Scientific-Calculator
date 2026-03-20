#include <stdio.h>
#include <math.h>
int main()
{
    printf("__________Scientific Calculator__________\n");
    printf("1.  Addition\n");
    printf("2.  Subtraction\n");
    printf("3.  Multiplication\n");
    printf("4.  Division\n");
    printf("5.  Power\n");
    printf("6.  Square Root\n");
    printf("7.  Cube Root\n");
    printf("8.  Trigonometric Functions\n");
    printf("9.  Inverse Trigonometric Functions\n");
    printf("10. Hyperbolic Functions\n");
    printf("11. Logarithm Functions\n");
    printf("12. Exponential\n");
    printf("13. Factorial\n");
    printf("14. Modulo Operation\n");
    printf("15. Absolute Value\n");
    printf("16. Exit\n");
    int x;
    while (printf("Choice : "))
    {
        scanf("%d", &x);
        if (x == 1)
        {
            float a, sum = 0;
            char ch;
            while (scanf("%f%c", &a, &ch) == 2)
            {
                sum += a;
                if (ch == '\n')
                {
                    break;
                }
            }
            printf("%f\n", sum);
        }
        if (x == 2)
        {
            float a = 0, b;
            char ch;
            if (scanf("%f%c", &a, &ch) == 2)
            {
                if (ch != '\n')
                {
                    while (scanf("%f%c", &b, &ch) == 2)
                    {
                        a -= b;
                        if (ch == '\n')
                        {
                            break;
                        }
                    }
                }
            }
            printf("%f\n",a);
        }
        if (x == 3)
        {
            float a, mul = 1;
            char ch;
            while (scanf("%f%c", &a, &ch) == 2)
            {
                mul *= a;
                if (ch == '\n')
                {
                    break;
                }
            }
            printf("%f\n", mul);
        }
        if (x == 4)
        {
            float a = 0, b;
            char ch;
            if (scanf("%f%c", &a, &ch) == 2)
            {
                if (ch != '\n')
                {
                    while (scanf("%f%c", &b, &ch) == 2)
                    {
                        a /= b;
                        if (ch == '\n')
                        {
                            break;
                        }
                    }
                }
            }
            printf("%f\n",a);
        }
        if (x == 5)
        {
            double a, b;
            scanf("%lf %lf", &a, &b);
            printf("%lf\n", pow(a, b));
        }
        if (x == 6)
        {
            double a;
            scanf("%lf", &a);
            if (a < 0)
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%lf\n", sqrt(a));
            }
        }
        if (x == 7)
        {
            double a;
            scanf("%lf", &a);
            if (a < 0)
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%lf\n", cbrt(a));
            }
        }
        if (x == 8)
        {
            double r, x;
            char ch[10];
            scanf("%s", ch);
            scanf("%lf", &r);
            x = r * 1309 / 75000;
            if (ch[0] == 's' && ch[1] == 'i' && ch[2] == 'n')
            {
                printf("%lf\n", sin(x));
            }
            else if (ch[0] == 'c' && ch[1] == 'o' && ch[2] == 's')
            {
                printf("%lf\n", cos(x));
            }
            else if (ch[0] == 't' && ch[1] == 'a' && ch[2] == 'n')
            {
                printf("%lf\n", tan(x));
            }
        }
        if (x == 9)
        {
            double r;
            char ch[10];
            scanf("%s", ch);
            scanf("%lf", &r);
            if (ch[0] == 'a' && ch[1] == 's' && ch[2] == 'i' && ch[3] == 'n')
            {
                printf("%lf\n", asin(x));
            }
            else if (ch[0] == 'a' && ch[1] == 'c' && ch[2] == 'o' && ch[3] == 's')
            {
                printf("%lf\n", acos(x));
            }
            else if (ch[0] == 'a' && ch[1] == 't' && ch[2] == 'a' && ch[3] == 'n')
            {
                printf("%lf\n", atan(x));
            }
        }
        if (x == 10)
        {
            double r;
            char ch[10];
            scanf("%s", ch);
            scanf("%lf", &r);
            if (ch[0] == 's' && ch[1] == 'i' && ch[2] == 'n' && ch[3] == 'h')
            {
                printf("%lf\n", sinh(x));
            }
            else if (ch[0] == 'c' && ch[1] == 'o' && ch[2] == 's' && ch[3] == 'h')
            {
                printf("%lf\n", cosh(x));
            }
            else if (ch[0] == 't' && ch[1] == 'a' && ch[2] == 'n' && ch[3] == 'h')
            {
                printf("%lf\n", tanh(x));
            }
        }
        if (x == 11)
        {
            double a;
            char ch[10];
            scanf("%s", ch);
            scanf("%lf", &a);
            if (ch[0] == 'l' && ch[1] == 'o' && ch[2] == 'g')
            {
                printf("%lf\n", log10(a));
            }
            else if (ch[0] == 'l' && ch[1] == 'n')
            {
                printf("%lf\n", log(a));
            }
        }
        if (x == 12)
        {
            double a;
            scanf("%lf", &a);
            printf("%lf\n", exp(a));
        }
        if (x == 13)
        {
            int a, fact = 1;
            scanf("%d", &a);
            for (int i = 1; i < a; i++)
            {
                fact = fact * i;
            }
            printf("%d\n", fact);
        }
        if (x == 14)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            printf("%d\n", a % b);
        }
        if (x == 15)
        {
            float a;
            scanf("%f", &a);
            if (a < 0)
            {
                printf("%f\n", (-1) * a);
            }
            else
            {
                printf("%f\n", a);
            }
        }
        if (x == 16)
        {
            break;
        }
    }
    return 0;
}