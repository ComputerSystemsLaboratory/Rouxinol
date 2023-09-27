#include<cstdio>

int H, A[2000000];

int parent(int i){
	return i / 2;
}

int left(int i){
	return 2 * i;
}

int right(int i){
	return 2 * i + 1;
}

void helpIncreaseKey(int key){
	int i = H, a;
	A[H] = key;
	while (i > 1 && A[parent(i)] < A[i]){
		a = A[i], A[i] = A[parent(i)], A[parent(i)] = a;
		i = parent(i);
	}
}

void insert(int key){
	H++;
	A[H] = -1;
	helpIncreaseKey(key);
}

void maxHeapify(int A[],int i){
	int l = left(i);
	int r = right(i);
	int largest;
	if (l <= H && A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r <= H && A[r] > A[largest])
		largest = r;
	if (largest != i){
		int a = A[i];
		A[i] = A[largest], A[largest] = a;
		maxHeapify(A, largest);
	}
}

int heapExtractMax(void){
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(A, 1);
	return max;
}

int main(void){
	int key;
	char S[10];
	while(scanf("%s", S), S[2] != 'd'){
		if(S[0] == 'i'){
			scanf("%d", &key);
			insert(key);
		}
		else
			printf("%d\n", heapExtractMax());
	}
	return 0;
}