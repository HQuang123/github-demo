/* file pointer_demo5.c */ #include <stdio.h>

#include <math.h>
int isFibonacci();
int isFibonacci(int n){
	int t1,t2,f;
	t1 = 1;
	t2 = 1;
	f = 1;
	while(f<n){
		f=t1+t2;
		t1 = t2;
		t2 = f;
	};
	if(n==f){return 1;
	}
	else{return 0;
	};
}

int main(){
	int n;
	do {
		scanf("%d", &n);
	}
	while(n<0);
	if(isFibonacci(n)==1){printf("N is Fibo element");
	}
	else{printf("N is not Fibo element");
	}
	return 0;
}



