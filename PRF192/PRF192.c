#include <stdio.h>
#define MAXN 100
//Prototypes


int main(){
	int a[] = {1,3,5,7,9,2,4,6,8,0};
	int index = 4;
	int i;
	for(i = index; i<= 9 ; i++ ){
		a[i] = a[i+1];
	}
	for (i = 0; i<=8 ; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
