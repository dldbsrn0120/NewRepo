#pragma warning(disable:4996)
#include <string.h>
#include <stdlib.h>
// ArrayList 001

// param_type : int, double, char, string

void* MemAllocation(void* arr, char* param_type, int size) {

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

void MemFree(void* arr) {
	free(arr);

}