#include<iostream>
using namespace std;

int parent(int i){
	return i/2;
}

int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i+1;
}


int main(){
	int H;
	cin >> H;
	int *A = new int[H+1];

	for(int i=1; i<=H; ++i){
		scanf("%d", &A[i]);
	}

	for(int i=1; i<=H; ++i){
		cout << "node " << i << ": key = " << A[i] << ", ";

		int p_i = parent(i);
		if(p_i >= 1)
			cout << "parent key = " << A[p_i] << ", ";

		int l_i = left(i);
		if(l_i <= H)
			cout << "left key = " << A[l_i] << ", ";

		int r_i = right(i);
		if(r_i <= H)
			cout << "right key = " << A[r_i] << ", ";

		cout << endl;
	}

	return 0;
}

