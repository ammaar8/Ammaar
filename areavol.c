#include<stdio.h>
#include<conio.h>

// Code for Volume :
void volume(){

        float dat1,dat2,dat3,vol;
        char solid;
        printf("Square:s \nRectangle:r \nSphere:c \n");
        scanf(" %c", &solid);
        #define PI 3.142
        if (solid == 's'){
            printf("input side:");
            scanf("%f", &dat1);
            vol = dat1*dat1*dat1;
            printf("Volume of required shape is %.2f ", vol);
        }else if(solid == 'r'){
            printf("input length:");
            scanf(" %f", &dat1);
            printf("input breadth:");
            scanf(" %f", &dat2);
            printf("input height:");
            scanf(" %f", &dat3);
            vol = dat1*dat2*dat3;
            printf("Volume of required shape is %.2f ", vol);
        }else if(solid == 'c'){
            printf("input radius:");
            scanf(" %f",&dat1);
            vol = 1.3333 * PI * dat1 * dat1 * dat1;
            printf("Volume of required solid is %.2f ", vol);
        }else{
            printf("solid not recognized");
        }
}

//Code for finding area

void area(){
        float dat1,dat2,dat3,area;
        char lamina;
        printf("Square:s \nRectangle:r \nCircle:c \n");
        scanf(" %c", &lamina);
        if (lamina == 's'){
            printf("input side:");
            scanf("%f", &dat1);
            area = dat1*dat1;
            printf("Area of required solid is %.2f ", area);
        }else if (lamina == 'r'){
            printf("input length:");
            scanf("%f", &dat1);
            printf("input breadth:");
            scanf("%f", &dat2);
            area = dat1*dat2;
            printf("Area of required solid is %.2f ", area);
        }
}

void main(){
        char operation;

		clrscr();
        printf("enter function: (volume:v, area:a):");
        scanf("%c", &operation);

         if(operation == 'v'){
            volume();
         }else if(operation == 'a'){
            area();
        }else{
            printf("invalid input");
        }
		getch();
}