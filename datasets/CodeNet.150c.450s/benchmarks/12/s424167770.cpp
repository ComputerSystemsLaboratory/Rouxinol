#include <stdio.h>

#define MAX_H (260)

typedef struct
{
    int key;
    int parent_id;
    int left_id;
    int right_id;
} Node;

int H;
Node A[MAX_H + 1];

int main()
{
    scanf("%d", &H);
    
    for ( int i = 1; i <= H; i++ ) {
	Node node;
	int key;
	node.parent_id = (i >> 1);
	node.left_id   = (i << 1);
	node.right_id  = node.left_id + 1;
	scanf("%d", &node.key);
	A[i] = node;
    }

    for ( int i = 1; i <= H; i++ ) {
	Node node = A[i];
	printf("node %d: key = %d, ", i, node.key);
	if ( i > 1 ) {
	    printf("parent key = %d, ", A[node.parent_id].key);
	}
	if ( node.left_id <= H ) {
	    printf("left key = %d, ", A[node.left_id].key );
	}
	if ( node.right_id <= H ) {
	    printf("right key = %d, ", A[node.right_id].key);
	}

	printf("\n");
    }

    return 0;
}