#include <stdio.h>
#include <math.h>

int main(void) {
    float x;
    float y;
    float func;

    for (x = 0; x >= 0 && x <= 1; x += 0.6) {
        for (y = 1; y >= 1 && y <= 2; y += 0.7) {
            if ((1 / tan(x / y)) < (cbrt(x + y))) {
                if ((1 / tan(x / y)) < ((x * x) + (y * y))) {
                    func = 1 / tan(x / y);
                    printf("Значение f(x,y) = %f\n, Значение x = %f\n, Значение y = %f\n", func, x, y);
                }
                else {
                    func = (x * x) + (y * y);
                    printf("Значение f(x,y) = %f\n, Значение x = %f\n, Значение y = %f\n", func, x, y);
                }
            }
            else {
                if ((cbrt(x + y)) < ((x * x) + (y * y))) {
                    func = cbrt(x + y);
                    printf("Значение f(x,y) = %f\n, Значение x = %f\n, Значение y = %f\n", func, x, y);
                }
                else {
                    func = (x * x) + (y * y);
                    printf("Значение f(x,y) = %f\n, Значение x = %f\n, Значение y = %f\n", func, x, y);
                }
            }
        }
    }
    return 0;
}