#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Printf(std::vector<int> & a) {
	for(int i=0;i<(int)a.size();++i) {
		if (i>0){ 
			cout << " ";
		}
		cout  << a.at(i);
	}
	cout << std::endl;
}
void InputSet(std::vector<int> & a) {
	int n;
	cin >> n;
	a.resize(n,0);
	for(int i=0;i<n;++i) {
		cin >> a.at(i);
	}
}

void CountingSort(std::vector<int> & A, std::vector<int> & B, int k)
{
	std::vector<int> C;
	C.resize(k+1,0);
	B.resize(A.size(),0);
	for (unsigned int j = 0; j < A.size(); ++j) {
		C[A[j]] = C[A[j]]+1;
	}
	/* C[i]??????i???????????属????即???????????????????*/
	for (int i = 1; i <= k; ++i) {
		C[i] = C[i] + C[i-1];
	}
	/* C[i]??????i??\????????属???????????属????即???????????????????*/
	for (int j = (int)A.size()-1; j>=0; --j) {
		B[C[A[j]]-1] = A[j];
		C[A[j]] = C[A[j]]-1;
	}
}


int main(){
	std::vector<int> A,B;
	::InputSet(A);
	int maxA = 0;
	for(unsigned int i=0;i<A.size();++i){
		maxA = std::max(maxA,A[i]);
	}
	CountingSort(A,B,maxA);
	Printf(B);
}