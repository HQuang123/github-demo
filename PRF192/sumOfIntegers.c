#include<stdio.h>
int main(){
	int s;
	s = 0;
	int x;
	do { scanf("%d",&x);
		 s+=x;
	}
	while(x!=0);
	printf("Sum is %d", s);
	return 0;
}
