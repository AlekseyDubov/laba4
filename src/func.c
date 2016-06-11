#include <stdio.h>
#include <math.h>

double diskr(float a, float b, float c)
{
	float d;
	d = b * b - 4 * a * c;
	if (d < 0) printf ("no roots");
	else
	{
		if (d == 0)
		printf ("x = %g ", - b / (2 * a));
		else
		printf ("x1 = %g, x2 = %g", (- b + sqrt(d)) / (2 * a),(- b - sqrt(d)) / (2 * a));
	}
	return 0;
}
