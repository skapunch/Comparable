#include "Comparable.h"
const int Lesser = -1;
const int Equal = 0;
const int Higher = 1;
const void *compareTo(struct comparable* a, struct comparable* b)
{
	Type type_a = a->type;
	Type type_b = b->type;
	if (type_a != type_b)
	{
		return NULL;
	}
	else
	{
		switch (type_a)
		{
		case Int:
			return Intcompare(a->data, b->data);
		}
		return NULL;		//dumbass compiler
	}
}

const void *Intcompare(int* a, int* b)
{
	int n1 = *a;
	int	n2 = *b;
	if (n1 < n2)
	{
		return &Lesser;
	}
	else if (n1 == n2)
	{
		return &Equal;
	}
	else if (n1 > n2)
	{
		return &Higher;
	}
	else
	{
		return NULL;
	}
}