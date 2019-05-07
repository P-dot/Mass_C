#include <stdio.h>

int main(int argc, char *argv[])
{
	struct {
		int a;
		float b;
		int c;
	} mystruct;
	  
	mystruct.a = 4;
	mystruct.b = 3.37;
	mystruct.c = 8;

	printf("a = %d, b = %f, c = %d\n", mystruct.a, mystruct.b, mystruct.c);

	return 0;

}
