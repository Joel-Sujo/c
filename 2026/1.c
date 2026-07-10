#include <stdio.h>

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int narray[10] = {0};
    int n = sizeof(array) / sizeof(array[0]);
    printf("The length: %d\n", n);
    printf("\n\n");
    int count = 0;
    for (int i = n-1; i >= 0; --i) {
        narray[count] = array[i];
        ++count;
    }
    printf("The count value is: %d\n", count);
    printf("The reversed array is:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", narray[i]);
    }
    printf("\n");
    return 0;
}