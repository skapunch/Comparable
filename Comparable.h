#pragma once
/* Comparable Implementation */
#ifndef COMPARABLE_H
#define COMPARABLE_H
#include <stddef.h>
extern const int Lesser, Equal, Higher;
typedef enum type {
	Char,		//0
	Int,		//1
	Float,		//2
	Bit			//3
} Type;

struct comparable {
	void* data;
	Type type;
};

typedef struct comparable Comparable;
const void *compareTo(struct comparable* a, struct comparable* b);
const void *Intcompare(int* a, int* b);
#endif