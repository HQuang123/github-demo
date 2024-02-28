#include<stdio.h>
int prime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 1;
			break;
		}
		
	}
}

double factorial(int n){
	double p = 1;
	int i;
	for(i=2;i<=n;i++){
		p*=n;
	};
	return p;
}

int fibo(int n ){
	int t1 = 1;
	int t2 = 1;
	int f = 0;
	int i;
	for(i=3;i<=n;i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	};
	return f;
	
}

void isFibonacci(int n){
	int t1 = 1;
	int t2 = 1;
	int f = 0;
	int i;
	while(f<n){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	};
	if(f!=n){
		printf("This is not an element of fibonacci numbers");
	}
	else{ printf("This is an element of fibonacci numbers");
	}
	
}

int main(){
	int n;
	int i;
	scanf("%d", &n);
	isFibonacci(n);
	return 0;
}
