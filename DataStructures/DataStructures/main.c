#pragma warning(disable:4996)
#include <stdio.h>
// Main
typedef int element;
typedef int position;

typedef struct _Node {
	element data;
	struct _Node* link;
} Node;

int main(void)
{
	int* arrList_int = NULL;
	double* arrList_double = NULL;
	int mode;
	Node* list;

	scanf("%d", &mode);

	switch (mode) {
		// ArrayList
	case 1:
		arrList_int = MemAllocation("int", 20);
		arrList_double = MemAllocation("double", 20);

		printf("%d ", getArraySize(arrList_int));
		printf("%d\n", getArraySize(arrList_double));

		MemFree(arrList_int);
		MemFree(arrList_double);
		break;
		// LinkedList
	case 2:
		list = getNode();
		CreateAttribute(&list, 1);
		CreateAttribute(&list, 2);
		CreateAttribute(&list, 3);

		ReadAttributes(&list);
		break;
	default:
		break;
	}


	return 0;
}
