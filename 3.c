#include <stdio.h>

int main() {
    int num, index = 0, buff;
    int maxs[100];

    scanf("%d", &num);
    while (num != 0) {
        if (num % 2 == 0) {
            maxs[index] = num;
            index += 1;
        }
        scanf("%d", &num);
    }

    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (maxs[i] < maxs[j]) {
                buff = maxs[i];
                maxs[i] = maxs[j];
                maxs[j] = buff;
            }
        }
    }

    printf("%d\n", maxs[1]);

    return 0;
}