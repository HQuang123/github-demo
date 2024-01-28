/* file pointer_demo5.c */ 
#include <stdio.h>
#include <math.h>
int gcd(int a, int b){
	while(a!=b){
		if (a>b){a-=b;
		}
		else{b-=a;
		}
	}
}

int lcm(int a, int b){
	return a*b/gcd(a,b);
}


int main(){
	int a,b;
	do {
		scanf("%d %d", &a, &b);
	}
	while(a<0||b<0);
	printf("The greatest common divisor is %d", gcd(a,b));
	printf("The least common multiple is %d", lcm(a,b));
	return 0;
}



