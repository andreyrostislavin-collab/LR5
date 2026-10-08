#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

void task1();
void task2_and_3();

int main() {
    task1();
    task2_and_3();
    return 0;
}

void task1() {
    double gr;
    double rad;
    double res;

    printf("--- Задание 1 ---\n");
    printf("Введите градусы (например: 30, 60 или 90): ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;
    res = sin(rad);

    printf("Результат sin(%.1f град) = %.6f\n", gr, res);
}

void task2_and_3() {
    const double k = 7.0;
    double x, a, b, y;

    printf("\n--- Задание 2 и 3* (Вариант 9) ---\n");
    printf("Введите параметр x (для проверки примера введите 2.2): ");
    scanf("%lf", &x);

    
    a = pow(k + x, 3);
    b = log10(fabs(k * x));
    y = pow(b, 2) + sqrt(fabs(a));

    printf("\nРазвёрнутый вид ответа:\n");
    printf("Значение x = %.1f\n", x);
    printf("Вычисленное значение функции y = %.3f\n", y);

    
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    printf("\nВыделенные целые части: A = %d, B = %d, C = %d\n", A, B, C);

    
    int cond_a = (A % 2 == 0) ^ (B % 2 == 0); 
    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("Выполнение условия а) (только одно четное): %d\n", cond_a);
    printf("Выполнение условия б) (все кратны 3): %d\n", cond_b);
}
