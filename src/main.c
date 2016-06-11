#include <stdio.h>
#include "func.h"
#include <math.h>

int main()
{
	float a, b, c;
	printf ("Enter a, b, c: ");
	scanf ("%f %f %f", &a, &b, &c);

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			printf ("x - whatever");
			else
			printf ("no roots");
		}
		else
		printf ("x = %g", - c / b);
	}
	else
	diskr (a, b, c);
	return 0;
}
