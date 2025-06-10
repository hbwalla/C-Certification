#include <stdio.h>

double getMaxOfThree(double paramA, double paramB, double paramC)
{
	double max = 0.0;
	
	if (paramA > max) max = paramA;
	if (paramB > max) max = paramB;
	if (paramC > max) max = paramC;
	
	return max;
}

int main(void)
{
	double tenValue = getMaxOfThree(5, 9, 10);
	double bigValue = getMaxOfThree(555.4, 555.3, 556.4);
	printf("Ten: %.2f\n", tenValue);
	printf("Bigest value: %.2f\n", bigValue);
	return 0;
}