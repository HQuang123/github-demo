/* file pointer_demo5.c */ 
#include <stdio.h>
#include <math.h>
void printMinMaxdigit();
void printMinMaxdigit(int n){
	int min = 9;
	int max = 0;
	int temp ;
	while (n>0) {
		temp = n%10;	
		if (min>temp){min = temp;
		}
		else if(max<temp){max = temp;
		};
		n = n/10;
	};
	printf("The max number is %d\n", max);
	printf("The min number is %d", min);
}



int main(){
	int n;
	do {
		scanf("%d", &n);
	}
	while(n<0);
	printMinMaxdigit(n);
	return 0;
}



