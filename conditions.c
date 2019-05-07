#include <stdio.h>

int main(void){
	printf("I'd like an int, please: ");
	int n = GetInt();

	if(n > 0){
		printf("You picked a positive number.\n");
	}
	else{
		printf("You picked a negative number.\n");
	}

}