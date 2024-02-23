#include<stdio.h>
#include<stdlib.h>
main(){
	double a[5];
	int i;
	for(i = 0; i<5;i++){
		scanf("%lf", &a[i]);
	};
	//bubble sort
	int j;
	for(i=0;i<5;i++){
		int temp;
		j = 0;
		while(j<5-i-1){
			if(a[j] < a[j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			};
			j++;
		}
	};
	for(i=0;i<5;i++){
		printf("Output: %lf ", a[i]);
	};
	system("pause");
}
