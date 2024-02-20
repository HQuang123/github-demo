#include <stdio.h>

int main() {
    int arr[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i = 0, j;

    while (i < 9) {
        j = 0;
        while (j < 8) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
//i la so lan pass, 1 lan pass la 1 lan loop qua ca array
//j la phan tu so j cua array, ly do ma j < length array -1 boi vi phan tu cuoi k co gi so sanh 
    // Print sorted array
    int val;
    for ( val = 0; val <= 8; val++) {
        printf("%d ", arr[val]);
    }

    return 0;
}

