#include<stdio.h>
#include<conio.h>

void fact2(number){
	long factorial;
	for(factorial =1;number >0;factorial = factorial*number,number--){
		printf("%d ", number);
	}
	printf("Factorial : %ld", factorial);
	getch();
}
void factorial(number){
	long factorial = 1;
	while(number > 0){
	printf("%d ", number);
	factorial = factorial * number;
	number = number -1;
	}
	printf("%ld", factorial);
	getch();
}

void main(){
	int number;
	clrscr();
	printf("Enter number : ");
	scanf("%d", &number);
	fact2(number);
}