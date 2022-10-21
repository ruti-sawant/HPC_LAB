#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    long long sum = 0;
    double stime;
    stime = omp_get_wtime();
#pragma omp parallel for reduction(+ \
                                   : sum)
    for (int i = 1; i <= 100; i++) {
        sum += i * i;
        printf("Square of %d = %lld\n", i, i * i);
    }
    double etime = omp_get_wtime();
    double time = etime - stime;
    printf("\nTime taken is %f\n", time);
    printf("Sum: %lld\n", sum);

    return 0;
}