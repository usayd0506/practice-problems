#include <stdio.h>

int main() {
    int marks;
    char grade;

   
    printf("Enter the  marks: ");
    scanf("%d", &marks);

  
    int category;
    if (marks >= 90) {
        grade = 'A';
        printf("The grade is %c\n", grade);
    } else if (marks >= 80) {
    	grade='B';
    	printf("The grade is %c\n", grade);
         
    } else if (marks >= 70) {
    	grade='B';
    	printf("The grade is %c\n", grade);
         
    } else if (marks >= 60) {
    	grade='B';
    	printf("The grade is %c\n", grade);
        
    } else {
    	("invalid");
         
    }

    
    return 0;
}
