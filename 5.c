#include <stdio.h>

struct PC {
    char* name;
    int price;
    int RAM;
};

struct PC* cheapestPC(struct PC data[], int n) {
    struct PC* cheaper = &data[0];

    for (int i = 1; i < n; i++) {
        if (data[i].price < cheaper->price) {
            cheaper = &data[i];
        } else if (data[i].price == cheaper->price && data[i].RAM < cheaper->RAM) {
            cheaper = &data[i];
        }
    }
    return cheaper;
}

int main() {
    struct PC data[] = {
        {"PC1", 500, 8},
        {"PC2", 300, 16},
        {"PC3", 500, 16},
        {"PC4", 300, 8},
        {"PC5", 500, 4}
    };

    struct PC* result = cheapestPC(data, 5);
    printf("Самый дешевый компьютер: %s\n", result->name);

    return 0;
}