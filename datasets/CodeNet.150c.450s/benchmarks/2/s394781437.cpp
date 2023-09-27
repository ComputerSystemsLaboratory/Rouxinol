//============================================================================
// Name        : Partition.cpp
// Author      : Ken
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>& A, int p, int r){
	int x = A.at(r);
	int i = p-1;
	for(int j=p; j<r; j++){
		//cout << "j: " << j << "\n";
		if(A.at(j) <= x){
			i ++;
			int tmp;
			tmp = A.at(i);
			A.at(i) = A.at(j);
			A.at(j) = tmp;
			//cout << "i: " << i << "\n";
		}
	}
	int tmp = A.at(i+1);
	A.at(i+1) = A.at(r);
	A.at(r) = tmp;

	return i+1;
}

void Print(vector<int>& A, int n){
	for(int i=0; i<n; i++){
		cout << A.at(i) << " ";
	}

	cout << "[" << A.at(n) << "] ";

	for(int i=n+1; i<A.size()-1; i++){
		cout << A.at(i) << " ";
	}

	cout << A.at(A.size()-1) << "\n";
}


int main() {
	int n;
	cin >> n;
	vector<int> A;

	for(int i=0; i<n; i++){
		int input;
		cin >> input;
		A.push_back(input);
	}
	//cout << "here\n";
	int ret = Partition(A, 0, n-1);

	Print(A, ret);

	return 0;
}

