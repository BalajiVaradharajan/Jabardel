#include <stdio.h>
#include <math.h>
#include <limits.h>

#define DIGITS_TO_REMOVE 3 

int recurse(int* foo, int begin, int end, int previous, int max){
    int j;
    int min = begin;

    for (j = begin; j <= end; ++j){
        if (foo[min] > foo[j]){
            min = j;
        }
    }

    return previous * pow(10, max - end + 1) + (max > end ? recurse(foo, min + 1, end + 1, foo[min], max) : foo[min]);
}

int main(void) {
    int foo[(const int)ceil(log10(INT_MAX))];
    int bar = 24635;
    int size = ceil(log10(bar));
    int j;
    int min = size - DIGITS_TO_REMOVE;

    for (j = 1; bar > 0; bar /= 10, ++j){
        foo[size - j] = bar % 10;

        if (j >= DIGITS_TO_REMOVE && foo[size - j] <= foo[min]){
            min = size - j;
        }
    }

    printf("%d", recurse(foo, min + 1, DIGITS_TO_REMOVE + 1, foo[min], size - 1));
    return 0;
}