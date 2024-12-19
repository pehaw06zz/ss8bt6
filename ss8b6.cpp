#include <stdio.h>
int main() {
    int n = 3;
    int array[3][3]= {{3,4,5},{10,14,17},{9,7,1}};
    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        sum += array[i][i];
    }
    printf("\nTong cua cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}
