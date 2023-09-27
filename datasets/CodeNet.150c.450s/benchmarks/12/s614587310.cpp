#include<iostream>
using namespace std;

int heap[251];

int main(){
	ios_base::sync_with_stdio(false);

	int size;
	int val;
	cin >> size;
	
	for(int i = 1 ; i <= size; i ++){
		cin >> val;
		heap[i] = val;
	}
	for(int i = 1 ; i <= size; i ++){
		cout << "node " << i <<": ";
		//key
		cout << "key = " <<heap[i] << ", ";
		//pearent
		if(i!=1)cout << "parent key = " <<  heap[(i)/2] << ", " ;
		//left
		if(i*2 <= size)cout << "left key = " << heap[i*2] << ", "; 
		//right
		if(i*2 + 1 <= size)cout << "right key = " << heap[i*2 + 1] <<", ";
		//endl
		cout << endl;
	}

	return 0;
}