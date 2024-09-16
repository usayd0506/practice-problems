#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
int main(){
	float income,incomeTax,newIncome;

	printf("Enter you Income:");
	scanf("%f", &income);
	
	if(income<=250000){
		printf("you income tax is zero and %.2f is your new income", income);
	}
	else if(income>250000 && income<=500000){
		incomeTax= income*(0.05);
		newIncome=income-incomeTax;
		printf("%.2f is your income tax and %.2f is your new income", incomeTax, newIncome);
	}
	else if(income>500000 && income< 1000000){
		incomeTax= income*(0.20);
			newIncome=income-incomeTax;
		printf("%.2f is your income tax and %.2f is your new income", incomeTax, newIncome);	
	}
	else {
			incomeTax= income*(0.3);
			newIncome=income-incomeTax;
		printf("%.2f is your income tax and %.2f is your new income", incomeTax, newIncome);	
	}
	return 0;
}