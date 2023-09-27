// ALDS1_6_A
#include <iostream>
#include <vector>
using namespace std;

void CountingSort(vector<int> &A, vector<int> &B, int k){
	vector<int> C;
	for(int i=0;i<=k;i++)
		C.push_back(0);

	for(int j=1;j<A.size();j++)
		C[A[j]]++;

	for(int i=1;i<=k;i++)
		C[i] += C[i-1];

	for(int j=A.size()-1;j>0;j--){
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
}

int main(){
	int n, num, max = 0;
	vector<int> A, B;

	cin>>n;
	B.resize(n+1);
	A.push_back(0);
	for(int i=1;i<=n;i++){
		cin>>num;
		A.push_back(num);

		if(num > max)
			max = num;
	}
	
	CountingSort(A, B, max);
	for(int i=1;i<=n;i++){
		if(i != 1)
			cout<<" ";

		cout<<B[i];
	}
	cout<<endl;

	return 0;
}