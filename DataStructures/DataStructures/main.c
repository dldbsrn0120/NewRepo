#pragma warning(disable:4996)
#include <stdio.h>

// Main

int main(void)
{
	int* arrList_int = NULL;
	double* arrList_double = NULL;

	arrList_int = MemAllocation("int", 20);
	arrList_double = MemAllocation("double", 20);

	MemFree(arrList_int);
	MemFree(arrList_double);

	return 0;
}
