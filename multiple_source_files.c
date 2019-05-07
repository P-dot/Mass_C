#include <stdio.h>

int add_numbers(int a, int b);


int main(int argc, char *argv[])
{       
	int total;
	
        total =	add_numbers(2, 4);

	printf("total = %d\n", total);

        return 0;
}
