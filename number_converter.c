#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int binary_to_decimal(int binary);
char* binary_to_hex(int binary);
int binary_to_octal(int binary);


int main(){

	int i;
	char choosingDHOQ;
	int a = 0;


	printf("==========================\n");
	printf("what would you like to do?\n");
	printf("==========================\n");
	printf("Convert binary to decimal (D)\n");
	printf("Convert binary to hexadecimal (H)\n");
	printf("convert binary to octal (O)\n");
	printf("Quit (Q)\n");
	printf("--------------------------\n");
	while(a == 0){
  	printf("Enter a choice from the menu (D, H, O, Q):");
  	scanf("%s", &choosingDHOQ);
  	fgetc(stdin);
		if(choosingDHOQ == 'D' || choosingDHOQ == 'd'){
			binary_to_decimal(i);
			return main();

		}else if(choosingDHOQ == 'H' || choosingDHOQ == 'h'){
			binary_to_hex(i);
			return main();

		}else if(choosingDHOQ == 'O' || choosingDHOQ == 'o'){
			binary_to_octal(i);
			return main();

		}else if(choosingDHOQ == 'Q' || choosingDHOQ == 'q'){
			exit(0);
		}else{
			printf("picked an invalid number :(\n");
			return main();
		}
		return(0);
	}
}

int binary_to_decimal (int binary){
	int decimal=0, weight=1, i, binary_num;
	printf("Enter a binary number: ");
	scanf("%d", &binary_num);
	binary = binary_num;
	while(binary_num != 0){
		i = binary_num % 10;
		decimal = decimal + i*weight;
		binary_num = binary_num / 10;
		weight = weight*2;
	}
	printf("The decimal equivalent of %d is %d\n\n", binary, decimal);
}


char* binary_to_hex (int binary){
	int hexadecimal=0, weight=1, i, binary_num;
	printf("Enter a binary number: ");
	scanf("%d", &binary_num);
	binary = binary_num;
	while(binary_num != 0){
		i = binary_num % 10;
		hexadecimal = hexadecimal + i*weight;
		binary_num = binary_num / 10;
		weight = weight*2;
	}
	printf("The hexadecimal equivalent of %d is %X\n\n", binary, hexadecimal);
}

int binary_to_octal (int binary){
	int octal=0, weight=1, i, binary_num;
	printf("Enter a binary number: ");
	scanf("%d", &binary_num);
	binary = binary_num;
	while (binary_num != 0) {
		i = binary_num % 10;
		octal = octal + i * weight;
		weight = weight * 2;
		binary_num = binary_num / 10;
	}
		printf("the octal equivalent of %d is %o\n\n", binary, octal);
}
