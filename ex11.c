#include <stdio.h>

int main (int argc, char *argv[])
{
	// go tough each string in argv

	int i =0;
	while(i < argc){
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	//let's make our own array of Strings
	char *names[] = {
		"Carlos", "Kenneth",
		"Brian", "Steven"};
	
	int num_names = 4;
	i=0; //watch for this
	while(i <num_names) {
		printf("name %d: %s\n", i, names[i]);
		i++;
	}
	
	return 0;
}

