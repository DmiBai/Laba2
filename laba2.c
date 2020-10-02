#include <stdio.h>
#include <cstdlib>

int main(){

    float a, b, c;

    scanf_s("%f %f %f", &a, &b, &c);

    if (a >= b && b >= c) {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else {
        a = fabs(a);
        b = fabs(b);
        c = fabs(c);
    }

    printf("%f %f %f", a, b, c);
    system("pause");
}
