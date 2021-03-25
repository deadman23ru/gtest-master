#include <stdio.h>
#include <math.h>
вкр
int square()
{
    double a, b, c, x1, x2, d;

    /* Получаем значения переменных */
    printf("Введите через пробел значения a, b и c:\n");
    int unused __attribute__((unused));
    unused = scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d > 0)
    {
	x1 = (-b - sqrt(d)) / (2 * a);
	x2 = (-b + sqrt(d)) / (2 * a);
	printf ("Корни уравнения равны %lf и %lf\n", x1, x2);
	return 0;
    }

    if (d == 0)
    {
	x1 = (-b) / (2 * a);
	printf("Корень уравнения равен %lf\n", x1);
	return 0;
    }

    if (d < 0)
	printf("Корней нет\n");
    return 0;
}
