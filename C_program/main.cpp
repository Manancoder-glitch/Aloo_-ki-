#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf_s("%d", &n);                  // Use scanf to get the number of rows from the user

    for (int i = 1; i <= n; i++) {     // i-->   show no of element in a Row
        int a;
        if (i % 2 == 0)
            a = 0;
        else a = 1;                     // a  ->  Determine the starting value for each row

        for (int j = 1; j <= i; j++) {
            printf("%d ", a);          // Print the current value of a

                                      // Alternate the value of a
            a = (a == 0) ? 1 : 0;
        }
        printf("\n");                 // Move to the next line after each row
    }

    return 0;
}





































































































































































