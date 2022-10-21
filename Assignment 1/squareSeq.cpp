#include <stdio.h>
#include <time.h>

int main() {
    double time;
    clock_t begin = clock();

    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        printf("Number : %d Square : %d\n", i, i * i);
        sum += i * i;
    }
    printf("Sum : %d\n", sum);

    clock_t end = clock();
    time = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time : %lf\n", time);
    return 0;
}