//============================================================================
// Name        : CountingSort.cpp
// Author      : Ken
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void WriteVector(vector<int>& A){
	for(int i=0; i<A.size()-1; i++){
		cout << A.at(i) << " ";
	}
	cout << A.at(A.size()-1) << "\n";
}

void CountingSort(vector<int>& A, vector<int>& B, int k){
	vector<int> C(k+1);

	for(int j=0; j<A.size(); j++){
		C.at(A.at(j)) = C.at(A.at(j)) + 1;
	}

	for(int i=1; i<=k; i++){
		C.at(i) = C.at(i) + C.at(i-1);
	}

	//WriteVector(C);

	for(int j=A.size()-1; j>=0; j--){
		//cout << "here1 ";
		//cout << "A.at(" << j << ") = " << A.at(j) << " ";
		B.at(C.at(A.at(j))-1) = A.at(j);
		//cout << "here2 ";
		C.at(A.at(j)) --;
		//cout << "here3\n";
	}
}

int main() {
	int n;
	const int k = 10000;
	vector<int> A, B;
	cin >> n;
	for(int i=0; i<n; i++){
		int input;
		cin >> input;
		A.push_back(input);
		B.push_back(0);
	}

	CountingSort(A, B, k);
	WriteVector(B);

	return 0;
}

