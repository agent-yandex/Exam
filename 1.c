#include <stdio.h>
#include <stdlib.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int x1 = start.x, x2 = finish.x;
    int y1 = start.y, y2 = finish.y;

    if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Coord start = {1, 1};
    struct Coord finish = {2, 3};

    int result = canGet(start, finish);
    printf("%d\n", result);

    return 0;
}