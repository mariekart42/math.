// calculating the log of a number

// log alway calculates the power of given 'result' to a given base
// -> what needs x to be so: "10^x = 10.000"  -> (4)
// long long range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807


#include "my_math.h"

// log only with whole numbers
long long whole_num_log(long long base, long long result)
{
	double x;
	
	x = 0;
	if(base <= 0 || result <= 0)
		return(-1);
	while ((my_pow(base, x)) <= result)
	{
		if((my_pow(base, x)) == result)
			return(x);
		x++;
	}
	return(-1);
}

int main(void)
{
     // int base = 10;
     // int result = 100;
     // int val;
     // val = whole_num_log(base, result);
     // printf("log(%d, %d) = %d\n", base, result, val);
	 long long val;
	val = my_pow(10, 10);
	printf("VAL: %lld\n", val);
}