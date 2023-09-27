#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int partition_out(vector <int> &A, int q){
    int n = A.size();
    for (int i=0; i<n; i++){
		if (i==q) cout << "[" << A[i] << "]";
		else cout << A[i];
		if (i!= n-1) cout<<" ";
        else cout<<endl;
    }
    return 0;
}

int partition(vector <int> &A, int p, int r){
	int x = A[r];
	int i = p;
	for (int j=p; j<r; j++){
		if (A[j]<=x){
			swap(A[j], A[i]);
			i++;
		}
	}
	swap(A[i], A[r]);
	return i;
}


int main(void){
	int n, p,q,r;
	cin >> n;
	vector <int> A(n,0);
	for (int i=0; i<n; i++)
		cin >> A[i];
	q = partition(A, 0, n-1);
	partition_out(A, q);
	return 0;
}