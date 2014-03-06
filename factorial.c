#include <stdio.h>

int factorial (int n){
	int result;
	result = 1;
	while (n>0){
		result = result *n;
		n = n-1;
	}
	return result;
	}

int main (int argc, char *argv[])
{
	long resultado = factorial (10);
	printf ("El resultado del factorial de 10 es: %ld\n", resultado);

return 0;
}

