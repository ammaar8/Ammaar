#include<stdio.h>
#include<conio.h>

/* 	
	This is how we define a constant value.
	The constant cannot change its value or else error is produced.
	We could use this by simply using the constant name.
*/
#define PI 3.14
#define HALF 0.5

void main() {
	int dat1,dat2;
	/*
		Area should be double because the area of the circle 
		& triangle could come in decimal.
	*/
	float area;
	char shape;
	
	clrscr();
	printf("positive values only!\n");
	printf("Find the area of : \n(rect:r,circ:c,triangle:t): ");
	scanf("%c", &shape);

	if(shape == 'r') {
		printf("enter length: ");
		scanf("%d", &dat1);
		printf("enter breadth: ");
		scanf("%d", &dat2);
		area = dat1 * dat2;
		// The .2f helps in rounding the answer to 2 decimal places
		printf("area of rectangle: %.2f", area);
	} else if(shape == 'c') {
		printf("enter radius: ");
		scanf("%d", &dat1);
		area= PI * dat1 * dat1;
		printf("area of circle : %.2f", area);
	} else if(shape == 't') {
		printf("enter height: ");
		scanf("%d", &dat1);
		printf("enter base: ");
		scanf("%d", &dat2);
		area = HALF * dat1 * dat2;
		printf("area of triangle: %.2f", area);
	} else {
		printf("shape not recognised");
	}
	getch();
}