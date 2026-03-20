#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int min = 1, max = 10;

    srand((unsigned)time(NULL));      // seed once
    int r = min + rand() % (max - min + 1); // [min, max]

    printf("Random number: %d\\n", r);
    return 0;
}