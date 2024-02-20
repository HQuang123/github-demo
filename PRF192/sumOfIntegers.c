#include<stdio.h>

int main() {
  int n;
  printf("Enter the value of n: ");
  scanf("%d", & n);
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= 2 * n - 1; j++) {
      if (j >= n - i + 1 && j <= n + i - 1) {
        if (j == n - i + 1 && j == n + i - 1) {
          printf("*");
        }
        if (j > n - i + 1 && j < n + i - 1) {
          printf("_");
        }
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
