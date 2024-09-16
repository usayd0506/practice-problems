#include <stdio.h>
int main(){
	char alpha;
	printf("enter an alphabet: ");
	scanf("%c",&alpha);
	if (alpha =='a' ||alpha == 'e' ||alpha == 'i' ||alpha =='o' || alpha =='u'){
		printf("the letter is vowel %c");
	}
	else {
	 	printf(" the letter is a constant %c");
	 };
		
}