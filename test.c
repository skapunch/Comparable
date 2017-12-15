#include <stddef.h>
#include <stdio.h>
#include "Comparable.h"
int main()
{
	int n1 = 7;
	int n2 = 4;
	Comparable number1;
	Comparable number2;
	const int * result;					//pointer to a constant

	number1.data = &n1;
	number1.type = Int;
	
	number2.data = &n2;
	number2.type = Int;
	if ( (result = compareTo(&number1, &number2)) != NULL)
	{
		if (result == &Lesser)
		{
			printf("Is Lesser.\n");
		}
		else if (result == &Equal)
		{
			printf("Is Equal.\n");
		}
		else if (result == &Higher)
		{
			printf("Is Higher.\n");
		}
	}
	else
	{
		printf("You can't hit a pinata with a chopstick, dawg!! (Incompatible type)");
	}
	return 0;
}