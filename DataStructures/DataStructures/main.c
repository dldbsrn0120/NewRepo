#pragma warning(disable:4996)
#include <stdio.h>

// Main

int main(void)
{
	int* arrList_int = NULL;
	double* arrList_double = NULL;

	arrList_int = MemAllocation(arrList_int, "int", 20);
	arrList_double = MemAllocation(arrList_double, "double", 20);

	MemFree(arrList_int);
	MemFree(arrList_double);

	return 0;
}
