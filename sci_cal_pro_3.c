#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    printf("__________Scientific Calculator__________\n");
    printf("1.  Addition (ex:a+b+c+....+n)\n");
    printf("2.  Subtraction(ex:a-b-c-....-n)\n");
    printf("3.  Multiplication(ex:a*b*c*....*n)\n");
    printf("4.  Division(ex:a/b/c/..../n)\n");
    printf("5.  Power(ex:a b)\n");
    printf("6.  Square Root(ex:a)\n");
    printf("7.  Cube Root(ex:a)\n");
    printf("8.  Trigonometric Functions(ex:sin a,cos a,tan a)\n");
    printf("9.  Inverse Trigonometric Functions(ex:asin a,acos a,atan a)\n");
    printf("10. Hyperbolic Functions(ex:sinh a,cosh a,tanh a)\n");
    printf("11. Logarithm Functions(ex: log a,ln a)\n");
    printf("12. Exponential(ex: a)\n");
    printf("13. Factorial(ex: a)\n");
    printf("14. Modulo Operation(ex: a b)\n");
    printf("15. Absolute Value(ex: a)\n");
    printf("16. Exit\n");
    int x;
    while (printf("Choice : "))
    {
        scanf("%d", &x);
        if (x == 1)
        {
            float a, sum = 0;
            char ch;
            int overflow = 0;
            while (scanf("%f%c", &a, &ch) == 2)
            {
                sum += a;
                if (isinf(sum) || isnan(sum))
                {
                    overflow = 1;
                }
                if (ch == '\n')
                {
                    break;
                }
            }
            if (overflow)
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%f\n", sum);
            }
        }
        if (x == 2)
        {
            float a = 0, b;
            char ch;
            int overflow = 0;
            if (scanf("%f%c", &a, &ch) == 2)
            {
                if (ch != '\n')
                {
                    while (scanf("%f%c", &b, &ch) == 2)
                    {
                        a -= b;
                        if (isinf(a) || isnan(a))
                        {
                            overflow = 1;
                        }
                        if (ch == '\n')
                        {
                            break;
                        }
                    }
                }
            }
            if (overflow || isinf(a) || isnan(a))
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%f\n", a);
            }
        }
        if (x == 3)
        {
            float a, mul = 1;
            char ch;
            int overflow = 0;
            while (scanf("%f%c", &a, &ch) == 2)
            {
                mul *= a;
                if (isinf(mul) || isnan(mul))
                {
                    overflow = 1;
                }
                if (ch == '\n')
                {
                    break;
                }
            }
            if (overflow)
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%f\n", mul);
            }
        }
        if (x == 4)
        {
            float a = 0, b;
            char ch;
            int error = 0;
            if (scanf("%f%c", &a, &ch) == 2)
            {
                if (isinf(a) || isnan(a))
                {
                    error = 1;
                }
                if (ch != '\n')
                {
                    while (scanf("%f%c", &b, &ch) == 2)
                    {
                        if (b == 0)
                        {
                            error = 1;
                        }
                        else if (!error)
                        {
                            a /= b;
                            if (isinf(a) || isnan(a))
                            {
                                error = 1;
                            }
                        }
                        if (ch == '\n')
                        {
                            break;
                        }
                    }
                }
            }
            if (error)
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%f\n", a);
            }
        }
        if (x == 5)
        {
            float a,b;
            scanf("%f %f",&a,&b);
            float res = pow(a,b);
            if (isinf(res) || isnan(res))
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%f\n", res);
            }
        }
        if (x == 6)
        {
            double a;
            scanf("%lf", &a);
            if (a < 0 || isinf(a) || isnan(a))
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
            if (isinf(a) || isnan(a))
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
                if (r >= -1 && r <= 1)
                {
                    printf("%f\n", asin(r)*180/3.1415926);
                }
                else
                {
                    printf("Math Error\n");
                }
            }
            else if (ch[0] == 'a' && ch[1] == 'c' && ch[2] == 'o' && ch[3] == 's')
            {
                if (r >= -1 && r <= 1)
                {
                    printf("%f\n", acos(r)*180/3.1415926);
                }
                else
                {
                    printf("Math Error\n");
                }
            }
            else if (ch[0] == 'a' && ch[1] == 't' && ch[2] == 'a' && ch[3] == 'n')
            {
                printf("%f\n", atan(r)*180/3.1415926);
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
                double res = sinh(r);
                if (isinf(res) || isnan(res))
                {
                    printf("Math Error\n");
                }
                else
                {
                    printf("%lf\n", res);
                }
            }
            else if (ch[0] == 'c' && ch[1] == 'o' && ch[2] == 's' && ch[3] == 'h')
            {
                double res = cosh(r);
                if (isinf(res) || isnan(res))
                {
                    printf("Math Error\n");
                }
                else
                {
                    printf("%lf\n", res);
                }
            }
            else if (ch[0] == 't' && ch[1] == 'a' && ch[2] == 'n' && ch[3] == 'h')
            {
                printf("%lf\n", tanh(r));
            }
        }
        if (x == 11)
        {
            double a;
            char ch[10];
            scanf("%s", ch);
            scanf("%lf", &a);
            if (a<=0)
            {
                printf("Math Error\n");
            } 
            else if (ch[0] == 'l' && ch[1] == 'o' && ch[2] == 'g')
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
            double res = exp(a);
            if (isinf(res) || isnan(res))
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%lf\n", res);
            }
        }
        if (x == 13)
        {
            int a, fact = 1;
            scanf("%d", &a);
            if (a < 0)
            {
                printf("Math Error\n");
            }
            else
            {
                int overflow = 0;
                for (int i = 1; i <= a; i++)
                {
                    if (fact > INT_MAX / i) {
                        overflow = 1;
                        break;
                    }
                    fact = fact * i;
                }
                if (overflow)
                {
                    printf("Math Error\n");
                }
                else
                {
                    printf("%d\n", fact);
                }
            }
        }
        if (x == 14)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (b == 0 || (a == INT_MIN && b == -1))
            {
                printf("Math Error\n");
            }
            else
            {
                printf("%d\n", a % b);
            }
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