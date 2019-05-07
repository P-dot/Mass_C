#include <cs50.h>
#include <stdio.h>

main()
{   
	printf("Name: ");
	string name = GetString();
	printf("hello, %s\n", name);
	return 0;
}