#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("\n<<< PROGRAM START >>>\n");
    int array[16] = {1,9,9,2,3,3,3,4,1,4,4,5,5,5,5,5};
    int n = sizeof(array) / sizeof(array[0]);
    int *array2 = malloc(n * sizeof(int));
    if (array2 == NULL) {
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        array2[i] = 0;
    }

    int acount = 0;
    for (int i = 0; i < n; ++i) {
        int temp = array[i];
        int x = 0;
        for (int j = 0; j < n; ++j) {
            if (temp == array2[j]) {
                x = 1;
                break;
            } else {
                x = 0;
            }
        }
        if (x == 0) {
            array2[acount] = temp;
            ++acount;
        }
    }

    struct f {
        int number;
        int count;
    };
    int bcount = 0;
    for (int i = 0; i < n; ++i) {
        if (array2[i] != 0) {
            ++bcount;
        } else {
            break;
        }
    }
    struct f *array3 = malloc(bcount * sizeof(struct f));
    if (array3 == NULL) {
        free(array2);
        return 1;
    }
    for (int j = 0; j < bcount; ++j) {
        array3[j].number = 0;
        array3[j].count = 0;
    }
    for (int i = 0; i < n; ++i) {
        int temp = array[i];
        for (int j = 0; j < bcount; ++j) {
            if (temp == array3[j].number) {
                ++array3[j].count;
                break;
            } else if (array3[j].number == 0) {
                array3[j].number = temp;
                array3[j].count = 1;
                break;
            } else {
                continue;
            }
        }
    }
    printf("\n");
    for (int j = 0; j<bcount; ++j){
        printf("The number %d is repeated %d times\n",array3[j].number,array3[j].count);
    }
    free(array2);
    free(array3);
    printf("\n\n <<< PROGRAM END >>> \n");
    return 0;
}