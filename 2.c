#include <stdio.h>
#include <math.h>

float sumFoo(int n) {
    float result = 1;
    for (int i = 2; i <= n; i++) {
        result += (1 / pow(i, i));
    }

    return result;
}

int main() {
    int n;
    float result;
    scanf("%d", &n);

    result = sumFoo(n);
    printf("%f\n", result);
}