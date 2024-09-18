#include<stdio.h>

int main(){

	int var1 = 0;
	double var2 = 0.02;
	float var3 = 0.1;
	char var4 = 'a';

	printf("Provide integer:\n");
	scanf("%d",&var1);

	if(var1 == 5){
		printf("Your input IS equal to 5 \n");
	}
	else{
		printf("Your input is NOT equal to 5 \n");
	}

	printf("Provide double:\n");
	scanf("%lf",&var2);

	if(var2 == 0.02){
		printf("Your input IS equal to 0.02 \n");
	}
	else{
		printf("Your input is NOT equal to 0.02 \n");
	}


	printf("Provide float:\n");
	scanf("%f",&var3);
	float compareFloat = 5;

	if(var3 == compareFloat){
		printf("Your input IS equal to %f \n",compareFloat);
	}
	else{
		printf("Your input is NOT equal to %f \nFound Instead:%f \n",compareFloat,var3);
	}


	printf("Provide character:\n");
	scanf("%c",&var4);
	char compareChar = 'a';

	if(var4 == compareChar){
		printf("Your input IS equal to a %c \n",compareChar);
	}
	else{
		printf("Your input is NOT equal to %c \n Found Instead: %c \n",compareChar, var4);
	}

	0;


	
}
