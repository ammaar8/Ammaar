#include<stdio.h>
#include<conio.h>

void main() {
	float dat1,dat2,area;
	char shape;

	printf("positive values only!\n");
	printf("Find the area of : \n(rect:r,circ:c,triangle:t): ");
	scanf("%c",&shape);

	if(shape == 'r'){
		printf("enter length: ");
		scanf("%f",&dat1);
		printf("enter breadth: ");
		scanf("%f",&dat2);
		area=dat1*dat2;
		printf("area of rectangle: %.2f",area);
	}else if(shape == 'c'){
		printf("enter radius: ");
		scanf("%f",&dat1);
		area= 3.142*dat1*dat1;
		printf("area of circle : %.2f",area);
	}else if(shape == 't'){
		printf("enter height :");
		scanf("%f",&dat1);
		printf("enter base: ");
		scanf("%f",&dat2);
		area = .5 * dat1 * dat2;
		printf("area of triangle: %.2f",area);
	}else{
	printf("shape not recognised");
	}
	getch();
}
