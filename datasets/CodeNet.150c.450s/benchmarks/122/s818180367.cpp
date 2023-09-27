/* Reason this implementation is slow:
we did not maintain a binary heap structure when we insert value
only rely on maxHeapify and buildMaxheap to
build up it again and again

*/

#include<cstdio>
#include<cstring>
#define MAX 2000001
#define NIL 0

int pq[MAX];
int sizeOfHeap = 0;

int getLeft(int node) {
	if (node * 2 > sizeOfHeap)
		return NIL;
	else
		return node * 2;
}

int getRight(int node) {
	if (node * 2 + 1 > sizeOfHeap)
		return NIL;
	else
		return node * 2 + 1;
} 

void swapValue(int a, int b){
	int tmp = pq[a];
	pq[a] = pq[b];
	pq[b] = tmp;
}

void maxHeapify(int currNode) {
	int left = getLeft(currNode);
	int right = getRight(currNode);
	int largest;
	// pick out the largest one among currNode and its child nodes
	if (left <= sizeOfHeap && pq[left] > pq[currNode])
		largest = left;
	else
		largest = currNode;
	if (right <= sizeOfHeap && pq[right] > pq[largest])
		largest = right;

	if (largest != currNode){
		swapValue(currNode, largest);
		maxHeapify(largest);
	}
}


// for testing
void printHeap() {
	for (int i = 1; i <= sizeOfHeap ; i++ ) {
		printf(" %d", pq[i]);
	}
	printf("\n");
}

int extract() {
	int max = pq[1];
	pq[1] = pq[sizeOfHeap];
	sizeOfHeap--;
	maxHeapify(1);

	return max;
}

void insert(int value) {
	sizeOfHeap++;

	int positionOfInsertedValue = sizeOfHeap;
	int parentOfInsertedNode = positionOfInsertedValue / 2;

	pq[positionOfInsertedValue] = value;

	while (positionOfInsertedValue > 1
		&& pq[positionOfInsertedValue] > pq[parentOfInsertedNode])
	{
		swapValue(positionOfInsertedValue, parentOfInsertedNode);
		positionOfInsertedValue = parentOfInsertedNode;
		parentOfInsertedNode = positionOfInsertedValue / 2;
	}

}


int main(){
	pq[NIL] = -1; // p[0] = -1 , for comparision
	char com[10];
	int v;

	while ( 1 ) {
		scanf("%s", com);
		if (com[2] == 'd')
			break;
		if (com[0] == 'i') {
			scanf("%d", &v);
			insert(v);
		}
		if (com[0] == 'e' && sizeOfHeap > 0) {
			printf("%d\n", extract());
		}
	}

	return 0;
}