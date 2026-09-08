#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 2;
    int *y = malloc(100);
    int *z = malloc(400);
    free(y);
    free(z);
    y = NULL;
    z = NULL;

    return 0;
}