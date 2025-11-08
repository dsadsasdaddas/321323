#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c,d;
    scanf_s("%d%d%d", &a, &b, &c);

    d = 100 * a + b * 10 + c;
    if (d < 100 || d > 999) {
        return 1;
    }
    else if (d == pow(a, 3) + pow(b, 3) + pow(c, 3))
    {
        printf("yes");
    }
    return 0;
}
