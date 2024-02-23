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
	//find max value
	int max = a[0];
	for (i = 0;i<5;i++){
		if(max < a[i]){
			max = a[i];
		};
	};
	printf("\nThe max value of the array is: ");
	printf("%d\n",max);
	//find the min value
	int min = a[0];
	for (i = 0;i<5;i++){
		if(min > a[i]){
			min = a[i];
		};
	};
	printf("The min value of the array is: ");
	printf("%d", min);
	//find the even value
	printf("\nThe even value of the array is: ");
	for (i = 0;i<5;i++){
		if(a[i] % 2 ==0){
			printf("%d ",a[i]);
		};
	};
	//find the sum of the even value
	int sum_even;
	for (i = 0;i<5;i++){
		if(a[i] % 2 ==0){
			sum_even += a[i];
		};
	};	
	printf("\nThe sum of even value is : %d\n", sum_even);
	
	
	//linear search, find x in the array
	printf("\n");
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	for(i = 0;i<5;i++){
		if(x == a[i]){
			printf("\n%d", i);
		}
	}
	//bubble sort
	int j;
	for(i = 0 ; i<5;i++){
		j = 0;
		while(j<5-1-i){
			int temp;
			if(a[j] < a[j+1]){
				temp = a[j];
				
				a[j] = a[j+1];
				a[j+1] = temp;	
			};
			j++;
		};
	};
	for(i = 0;i<5;i++){
		printf("%d ", a[i]);
	};	
	
	system("pause");
}
