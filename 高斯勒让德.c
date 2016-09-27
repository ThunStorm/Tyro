#include <stdio.h>
#include <math.h>

//long double Gauss theorem() 
int main()
{
	double a = 1, t = 0.25, p = 1, temp, b, Pi;
	int i;
	b = 1 / sqrt(2);
	for (i=0; i<3; i++)
	{
		temp = a;
		a = ( a + b ) / 2;
		b = sqrt(temp * b);
		t = t - p * ( temp - a ) * ( temp - a );
		p = 2 * p;
	 } 
	Pi = ( ( a + b ) * ( a + b ) ) / ( 4 * t);
	printf("%.15f", Pi);
}
