#include<stdio.h>
#include<stdlib.h>


main() {
	int i, a[5];
	printf("Enter value of items: ");
	for (i=0;i<5;i++){
		scanf("%d,", &a[i]);
	};
	//print array
	printf("Array is: ");
	for (i=0;i<5;i++){
		printf("%d ", a[i]);
	};
	system("pause");
}
