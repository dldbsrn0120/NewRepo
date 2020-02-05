/*
 * Single Linked List (단방향 연결 리스트 및 CRUD)
 */

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef int position;

typedef struct _Node {
	element data;
	struct _Node* link;
} Node;

Node* getNode() {

	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) {
		printf("Memory Allocation failed!\n");
		
		return NULL;
	}

	newNode->data = 0;
	newNode->link = NULL;

	return newNode;
}

Node* CreateList() {
	Node* newNode = getNode();
	newNode->data = -1;	// HEAD

	return newNode;
}

void DeleteList() {

}

void ReadAttributes(Node** head) {
	Node* ptr = NULL;
	if ((*head) == NULL) {
		printf("No such datas");
	}
	
	ptr = (*head)->link;
	while (ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

void CreateAttribute(Node** head, element e) {
	
	Node* newNode;
	Node* ptr = NULL;
	// base case

	if ((*head) == NULL) {
		printf("Memory is not allocated!");
		return;
	}

	newNode = getNode();
	newNode->data = e;
	if ((*head)->link == NULL) {
		(*head)->link = newNode;
	}
	else {
		ptr = *head;
		while (ptr->link != NULL) {
			ptr = ptr->link;
		}
		newNode->link = ptr->link;
		ptr->link = newNode;
	}
}

void UpdateAttribute(Node** head, position pos, element e) {

}

element DeleteAttribute(Node** head, position pos) {

}