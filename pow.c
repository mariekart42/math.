// calculates the power of base

#include "my_math.h"

long long my_pow(long long base,  long long power)
{
	double	i;
	long long	result;
	
	i = 1;
	result = 1;
	if (base == 0 && power == 0)
		return (-1);
	else if (base == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ <= power)
		result *= base;
	return (result);
}