#include <stdio.h>
#include <stdlib.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int dx = abs(finish.x - start.x);
    int dy = abs(finish.y - start.y);
    return (dx <= 1 && dy <= 1);
}

int main() {
    
    struct Coord start = {1, 1};
    struct Coord finish = {2, 3};
    
    if (canGet(start, finish)) {
        printf("Король может попасть с первой клетки на вторую одним ходом.\n");
    } else {
        printf("Король не может попасть с первой клетки на вторую одним ходом.\n");
    }
    
    return 0;
}