/*
 ============================================================================
 Name        : DataStructures.c
 Author      : P
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


// typedef struct myTag{
// 	int value;
// 	struct myTag *next;

// } node_t;


#if 0
int main(void) {

	node_t *head = NULL;
	node_t *node1 = malloc(sizeof(node_t));
	node_t *node2 = malloc(sizeof(node_t));
	node_t *node3 = malloc(sizeof(node_t));

	if(node1)
		free(node1);
	if(node1)
		free(node2);
	if(node1)
		free(node3);

	return 0;
}

#endif

struct 
{
	char ch1;
	float f1;
	char ch2;
	long lnum1;
	/* data */
}__attribute__((packed)) arr[4];;

int main()
{
	
	printf("size of struct is: %lu", sizeof(arr[0]));	
	printf("\n");
	printf("size of struct is: %lu", sizeof(arr[0].ch1));
	printf("\n");
	printf("size of struct is: %lu", sizeof(arr[0].ch2));
	printf("\n");
	printf("size of struct is: %lu", sizeof(arr[0].f1));
	printf("\n");
	printf("size of struct is: %lu", sizeof(arr[0].lnum1));
	printf("\n");
	printf("address of ch1 is: %lu", &(arr[0].ch1));
	printf("\n");
	printf("address of ch2 is: %lu", &(arr[0].ch2));
	printf("\n");
	printf("address of f1 is: %lu", &(arr[0].f1));
	printf("\n");
	printf("address of lnum1 is: %lu", &(arr[0].lnum1));

}