#include <stdio.h>

int main() {
    // Name:-Abdul Razzaque Ansari
    // ERP:-10031
    int N = 10;
    int i;
    
    //FOR LOOP
    int sum_for = 0;
    int for_count = 0;

    for (i = 1; i <= N; i++) {
        sum_for += i;
        for_count++;
    }

    // WHILE LOOP
    int sum_while = 0;
    int while_count = 0;
    i = 1;

    while (i <= N) {
        sum_while += i;
        while_count++;
        i++;
    }

    // DISPLAY RESULTS 
    printf("Loop Optimization Demo\n");
    printf("----------------------\n");

    printf("For Loop:\n");
    printf("Sum = %d\n", sum_for);
    printf("Iteration Count = %d\n\n", for_count);

    printf("While Loop:\n");
    printf("Sum = %d\n", sum_while);
    printf("Iteration Count = %d\n\n", while_count);

    /* COMPARISON */
    if (for_count == while_count) {
        printf("Both loops executed same number of iterations.\n");
    } else {
        printf("Loops executed different number of iterations.\n");
    }

    return 0;
}
// Output 
// Loop Optimization Demo
// ----------------------
// For Loop:
// Sum = 55
// Iteration Count = 10

// While Loop:
// Sum = 55
// Iteration Count = 10

// Both loops executed same number of iterations.


