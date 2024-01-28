/* file pointer_demo5.c */ #include <stdio.h>

#include <math.h>
int fibonacci();
int fibonacci(int n){
	int t1,t2,f;
	int i;
	t1 = 1;
	t2 = 1;
	f = 1;
	for(i=3;i<=n;i++){
		f=t1+t2;
		t1 = t2;
		t2 = f;
	};
	return f;
}

int main(){
	int n;
	do {
		scanf("%d", &n);
	}
	while(n<0);
	printf("%d",fibonacci(n));
	return 0;
}



