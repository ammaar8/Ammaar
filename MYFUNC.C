#include<stdio.h>
#include<conio.h>

void circle() {
	float radius;
	printf("Enter radius: ");
	scanf("%f", &radius );
	printf("The area of the circle is : %.2f", ((22/(float)7)*radius*radius));
	getch();
}
void rectangle() {
	float length,breadth;
	printf("Enter length: ");
	scanf("%f", &length );
	printf("Enter breadth: ");
	scanf("%f", &breadth );
	printf("The area of the rectangle is : %.2f", (length*breadth));
	getch();
}
void triangle() {
	float base,height;
	printf("Enter base: ");
	scanf("%f", &base );
	printf("Enter height: ");
	scanf("%f", &height );
	printf("The area of the triangle is : %.2f", (0.5*base*height));
	getch();
}
void square() {
	float side;
	printf("Enter side: ");
	scanf("%f", &side );
	printf("The area of the square is : %.2f", (side*side));
	getch();
}


void main() {
	int selected_optn;
	clrscr();
	printf("Menu: \n 1.Circle \n 2.Rectangle \n 3.Triangle \n 4.Square \nEnter desired option:");
	scanf("%d", &selected_optn);
	switch(selected_optn) {
	case 1:
		circle();
		break;
	case 2:
		rectangle();
		break;
	case 3:
		triangle();
		break;
	case 4:
		square();
		break;
	default:
		printf("You entered a wrong option");
		getch();
		main();
	}

}