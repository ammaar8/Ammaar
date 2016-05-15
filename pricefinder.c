#include<stdio.h>

int main() {
	char slct[3];
	printf("Welcome \n Availabe items: \n Apple \n Mango \n Cream \n Potato ");
	scanf("%s", slct);
	
	if (slct[0] == 'A'){
		printf("Apple $3");
	}elseif(slct[0] == 'M'){
		printf("Mango $2");
	}elseif(slct[0] == 'C'){
		printf("Cream $3");
	}elseif(slct[0] == 'P'){
		printf("Potato $1");
	}else{
		printf("invalid product");
		main();
	}
}