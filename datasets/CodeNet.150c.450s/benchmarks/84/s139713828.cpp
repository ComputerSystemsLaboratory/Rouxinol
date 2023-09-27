//============================================================================
// Name        : MergeSort.cpp
// Author      : Ken
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int n_comparison = 0;
long long int n_inversion = 0;

void writeVector(const vector<int>& A){
	for(int i=0; i<A.size()-1; i++){
		cout << A.at(i) << " ";
	}
	cout << A.at(A.size()-1);
	//cout << "\n";
}

void Merge(vector<int>& A, int left, int mid, int right){
	//cout << "Merge([";
	//writeVector(A);
	//cout << "], " << left << ", " << mid << ", " << right << ")\n";
	int n1 = mid - left;
	int n2 = right - mid;

	vector<int> L(n1+1);
	vector<int> R(n2+1);

	for(int i=0; i<n1; i++){
		L.at(i) = A.at(left + i);
	}
	L.at(n1) = pow(10, 9) + 1;
	//cout << "L: ";
	//writeVector(L);

	for(int i=0; i<n2; i++){
		R.at(i) = A.at(mid + i);
	}
	R.at(n2) = pow(10, 9) + 1;
	//cout << "R: ";
	//writeVector(R);

	int i = 0, j = 0;
	for(int k=left; k<right; k++){
		if(L.at(i) <= R.at(j)){
			//cout << "i: " << i << "\n";
			A.at(k) = L.at(i);
			i++;
			//n_comparison ++;
		}else{
			//cout << "j: " << j << "\n";
			//n_comparison ++;
			n_inversion += (n1 - i);
			A.at(k) = R.at(j);
			j++;

		}
	}
	//writeVector(A);
}

void MergeSort(vector<int>& A, int left, int right){
	//cout << "MergeSort([";
	//writeVector(A);
	//cout << "], " << left << ", " << right << ")\n";
	if(left+1 < right){
		int mid = (left + right)/2;
		MergeSort(A, left, mid);
		MergeSort(A, mid, right);
		Merge(A, left, mid, right);
	}
}

int main() {
	int n, input;
	cin >> n;
	vector<int> A;
	for(int i=0; i<n; i++){
		cin >> input;
		A.push_back(input);
	}

	MergeSort(A, 0, n);
	//writeVector(A);
	//cout << "\n";
	//cout << n_comparison << "\n";
	cout << n_inversion << "\n";

	return 0;
}

