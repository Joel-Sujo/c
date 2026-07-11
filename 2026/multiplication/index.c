#include <stdio.h>

// THE USE OF THIS CODE IS TO MULTIPLY TWO MATRICES
int main(void) {
    int matrixa[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrixb[3] [3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrixc[3] [3];
    for (int i=0;i<3;++i){
        for (int j=0;j<3;++j){
            matrixc[i] [j]= matrixa[i] [j] * matrixb[i] [j];
        }
    }
    printf("\nThe multiplied matrix: \n");
    for (int i=0;i<3;++i){
        for (int j=0;j<3;++j){
            printf("%d  ",matrixc[i] [j]);
        }
        printf("\n");
    }
    return 0;
}
