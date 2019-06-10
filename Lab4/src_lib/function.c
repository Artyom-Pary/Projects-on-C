#include <head.h>
#include <math.h>

void f(const double *x, double *result)
{
	*result = (1 + sin(2 * (*x)) / cos(2 * (*x)));
}
