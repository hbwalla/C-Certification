#include <stdio.h>

int getValue(int paramA, float paramB);
int getExclusive(int paramA, int paramB);

int main(void)
{
	int thirtyFiveValue = getValue(4, 2.4);
	int thirtyValue1 = getValue(4, 2.6);
	int thirtyValue2 = getValue(6, 2.4);
	int twentyValue = getValue(6, 2.6);
	int twoValue = getExclusive(2, 1);
	int zeroValue = getExclusive(2, 2);

	printf("Thirty five: %d\n", thirtyFiveValue);
	printf("Thirty: %d\n", thirtyValue1);
	printf("Thirty: %d\n", thirtyValue2);
	printf("Twenty: %d\n", twentyValue);
	printf("Two: %d\n", twoValue);
	printf("Zero: %d\n", zeroValue);
	return 0;
}
 
 int getValue(int paramA, float paramB) {
     if (paramA >= 5) {
         if (paramB >= 2.5) return 25;
         return 30;
     }
     else {
         if (paramB >= 2.5) return 30;
         return 35;
     }
 }
 
 int getExclusive(int val1, int val2) {
     if ((val1 == 2 && val2 == 2) || (val1 == 0 && val2 == 0)) return 0;
     return 2;
 }