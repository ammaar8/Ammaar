#include<conio.h>
#include<stdio.h>

void fibo2(firstnum,secondnum,limit){
	int addition;
	printf("%d,%d", firstnum,secondnum);
	for (addition = firstnum + secondnum;addition < limit;firstnum = secondnum, secondnum = addition, addition=firstnum+secondnum){
		printf(",%d", addition);
		}
	getch();
}
void fibo(firstnum,secondnum,limit){
	int addition;
	addition = firstnum + secondnum;
	printf("fibonanci : ");
	printf("%d,%d", firstnum,secondnum);
	while(addition <= limit){
		printf(",%d",addition);
		firstnum = secondnum;
		secondnum = addition;
		addition = firstnum + secondnum;

	}
	getch();
}
void main(){
	int firstnum,secondnum,limit;
	clrscr();
	printf("Enter First number:");
	scanf("%d", &firstnum);
	printf("Enter Second number:");
	scanf("%d", &secondnum);
	printf("Enter Limit:");
	scanf("%d", &limit);
	fibo2(firstnum,secondnum,limit);

}