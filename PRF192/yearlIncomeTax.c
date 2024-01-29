#include<stdio.h>
int main(){
	printf("Your income of this year:");
	int income;
	scanf("%d",&income);
	printf("Number of dependent: ");
	int d;
	scanf("%d",&d);
	int tf;
	tf = 12*(9000000+d*3600000); 
	printf("Tax-free income: %d\n",tf);
	int ti;
	if(income-tf<=0){ti = 0;
	}
	else if(income-tf>0){ti = income-tf;
	}
	printf("Taxable income: %d\n", ti);
	int it;
	if(ti<=0){it = 0; 
	}
	else if(ti<=5000000){it = 0.05*ti;
	}
	else if(ti<=10000000){it = 0.1*ti;
	}
	else if(ti<=18000000){it = 0.15*ti;
	}
	else {it = 0.2*ti;
	};
	printf("Income tax: %d\n", it);
	return 0;
}
