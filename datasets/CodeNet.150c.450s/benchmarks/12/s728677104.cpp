#include <iostream>
#include <vector>
using namespace std;

int main(){
	int size;
	cin >> size;
	vector<int> heap(size*2);
	for(int i = 1; i <= size; i++){
		cin >> heap[i];
	}
	for(int i = 1; i <= size; i++){
		cout << "node " << i << ": key = " << heap[i] << ", ";
		if( i != 1 ) cout << "parent key = " << heap[i/2] << ", ";
		if( i*2 <= size ) cout << "left key = " << heap[i*2] << ", ";
		if( i*2+1 <= size ) cout << "right key = " << heap[i*2+1] << ", ";
		cout << endl;
	}
}