//prueba define

#include <stdio.h>

#define PI 3.14;

double area_circ(int r)
{
return (r*r)*PI;
}

int main()
{
printf("%f\n",area_circ(1));
return 0;
}


