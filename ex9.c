#include <stdio.h>
int main (int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	// first, prim them out raw
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);
	
	printf("name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);
	
	printf("name: %s\n", name);

	//setup the numbers
	numbers[0] = 21;
	numbers[1] = 05;
	numbers[2] = 15;
	numbers[3] = 07;

	//setup the name
	name[0] = 'L';
	name[1] = 'u';
	name[2] = 'i';
	name[3] = 's';

	// then print them out initialized
	printf("numbers: %d %d %d %d\n",
		numbers[0], numbers[1],
		numbers[2], numbers[3]);

	printf("name each: %c %c %c %c\n",
		name[0], name[1],
		name[2], name[3]);

	//print the name like a string
	printf("name: %s\n", name);
 
	//another way to use name
	char *another = "Luis";

	printf ("another: %s\n", another);

	printf("another each: %c %c %c %c\n",
		another[0], another[1],
		another[2], another[3]);
	return 0;
}

