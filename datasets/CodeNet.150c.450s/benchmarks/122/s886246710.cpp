#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

int H = 0, A[2000002];

int parent(int i){
	return i/2;
}

void heapIncreaseKey(int key){
	int i = H;
	if(key < A[i])
		printf("err\n");
	A[i] = key;
	while(i > 1 && A[parent(i)] < A[i]){
		swap(A[i], A[parent(i)]);
		i = parent(i);
	}
}

void insert(int key){
	H++;
	A[H] = INT_MIN;
	heapIncreaseKey(key);
}

void maxHeapify(int i){
    int l = 2*i;
    int r = l+1;

    int largest = (l <= H && A[l] > A[i]) ? l : i;
    if(r <= H && A[r] > A[largest]) largest = r;
    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int heapExtractMax(){
	if(H < 1)
		printf("err\n");
	int max = A[1];
	A[1] = A[H];
	H--;
	maxHeapify(1);
	return max;
}

int main(){
	char cmd[10];
	int arg = 0;
	for(;;){
		cin >> cmd;
		switch(cmd[2]){
		case 'd':
			return 0;
		case 't':
			printf("%d\n", heapExtractMax());
			break;
		default:
			cin >> arg;
			insert(arg);
			break;
		}
	}
}

