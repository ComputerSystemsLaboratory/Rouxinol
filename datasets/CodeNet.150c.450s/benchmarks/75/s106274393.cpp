#include <bits/stdc++.h>

using namespace std;

void swap(int tree[], int i, int j) {
    int temp = tree[i];
    tree[i] = tree[j];
    tree[j] = temp;
}

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }
void maxHeapify(int tree[], int parent, int H) {
    int largest = -1;
    int l = left(parent);
    int r = right(parent);
    if(l <= H && tree[l] > tree[parent]) {
        largest = l;
    } else {
        largest = parent;
    }

    if(r <= H && tree[r] > tree[largest]) {
        largest = r;
    }

    if(largest != parent) {
        swap(tree, parent, largest);
        maxHeapify(tree, largest, H);
    }
}

void buildTree(int tree[],int H){
	for(int i=H/2;i>0;i--){
		maxHeapify(tree,i,H);
	}
}
int main() {
    int n;
	cin >> n;
    int tree[n];
    for(int i = 1; i <= n; i++) {
		scanf("%d",&tree[i]);		
    }
	buildTree(tree,n);

	for(int i = 1; i <= n ; i++){
		printf(" %d",tree[i]);	
	}
	printf("\n");
}
