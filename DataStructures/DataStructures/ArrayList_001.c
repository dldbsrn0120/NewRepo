#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

// ArrayList 001

// param_type : int, double, char, string

void* MemAllocation(char* param_type, int size) {

	void* arr;

	if (!strcmp(param_type, "int")) {
		arr = (int*)malloc(sizeof(int)*size);
		printf("allocated size is %d\n", sizeof(int)*size);

	} else if (!strcmp(param_type, "double")) {
		arr = (double*)malloc(sizeof(double)*size);
		printf("allocated size is %d\n", sizeof(double)*size);

	} else if (!strcmp(param_type, "char")) {
		arr = (char*)malloc(sizeof(char)*size);

	} else if (!strcmp(param_type, "string")) {
		arr = (char*)malloc(sizeof(char)*(size+1));

	} else {
		arr = NULL;
	}
	return arr;
}

int searchIntegerValuePos(int* arr, int value, int size) {
	
	int i;

	for (i = 0; i < size; i++) {
		if (arr[i] == value);
		break;
	}

	if (i >= size) return -1;
	else return i;
}

int getArraySize(void* arr) {
	return _msize(arr);
}

void MemFree(void* arr) {
	free(arr);
}