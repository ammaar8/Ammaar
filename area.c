#include<stdio.h>
#include<conio.h>

void main() {
	int dat1,dat2,area;
	char shape;
	clrscr();
	printf("positive values only!\n");
	printf("Find the area of : \n(rect:r,circ:c,triangle:t): ");
	scanf("%c",&shape);

	if(shape == 'r'){
		printf("enter length: ");
		scanf("%d",&dat1);
		printf("enter breadth: ");
		scanf("%d",&dat2);
		area=dat1*dat2;
		printf("area of rectangle: %d",area);
	}else if(shape == 'c'){
		printf("enter radius: ");
		scanf("%d",&dat1);
		area= 3.142*dat1*dat1;
		printf("area of circle : %d",area);
	}else if(shape == 't'){
		printf("enter height :");
		scanf("%d",&dat1);
		printf("enter base: ");
		scanf("%d",&dat2);
		area = .5 * dat1 * dat2;
		printf("area of triangle: %d",area);
	}else{
	printf("shape not recognised");
	}
	getch();
}