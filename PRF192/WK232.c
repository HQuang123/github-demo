#include<stdio.h>

double perimeterRectangle();
void printLeapYear();

double perimeterRectangle(double a, double b){
	double P;
	P = (a+b)*2;
	return P;
}

void printLeapYear(int N){
	int i;
	for (i = N; i<= 2024;i++){
		if(i%4==0 && i%100!=0){printf("%d ", i);
		}
		else if(i%400==0){printf("%d ", i);
		}
	}
}

void printShape(int N){
	int i;
	int j = 1;
	for(i=1;i<=N;i++){
		if(i==1||i==N){
			j=1;
			while(j<=(2*N-2)/2){
				printf("*_");
				j++;
			};
			printf("*\n");
		}
		else{
			j=1;
			while(j==1){
				printf("*");
				j++;
			};
			while(j<2*N-1){
				printf("_");
				j++;
			};
			while(j==2*N-1){
				printf("*\n");
				j++;
			};
		}
	}
}

int menu(){
	int result;
	printf("\n1 - Calculate RECTANGLE PERIMETER Q1\n");
	printf("2 - Print out LEAP YEAR Q2\n");
	printf("3 - Print out SHAPE Q3\n");
	printf("4 - Quit\n");
	scanf("%d", &result);
	return result;
}

int main(){
	double a, b;
	int N;
	int userchoice;
	do{
	 userchoice = menu();
	
		switch(userchoice){
		case 1: scanf("%lf",&a,&b);
				printf("%lf", perimeterRectangle(a,b));
				break;
		case 2: scanf("%d", &N);
				printLeapYear(N);
				break;
		case 3: scanf("%d", &N);
				printShape(N);
				break;
		case 4: printf("Good bye !");
				break;
		default: printf("Invalid");
				break;
	}}
	while(userchoice<=4 && userchoice>=1);
	return 0;
	
}
