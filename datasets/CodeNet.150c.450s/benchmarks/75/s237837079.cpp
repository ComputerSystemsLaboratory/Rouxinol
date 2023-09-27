#include<iostream>
#include<vector>
#include<algorithm>

#define NIL -2000000005

using namespace std;

int nodes[500005];

void maxHeapify(int i) {
    int max=i;
    if(nodes[2*i]>nodes[2*i+1] && nodes[2*i] != NIL){
        if(nodes[2*i]>nodes[i]){
            max = 2*i;
        }
    }else if(nodes[2*i+1] != NIL){
        if(nodes[2*i+1]>nodes[i]){
            max = 2*i+1;
        }
    }
    
    if(max != i){
        swap(nodes[max], nodes[i]);
        if(max <= 250000){
            maxHeapify(max);
        }
            
    }
    
	return;
}

int main() {
	for (int i = 0;i <= 500001;++i) {
		nodes[i] = NIL;
	}

	int n;
	cin >> n;
	for (int i = 1;i <= n;++i) {
		cin >> nodes[i];
	}


	for (int i = n/2; i > 0;--i) {
		maxHeapify(i);
	}


	for (int i = 1;i <= n;++i) {
		cout << " " << nodes[i];
	}
	cout << endl;
}


