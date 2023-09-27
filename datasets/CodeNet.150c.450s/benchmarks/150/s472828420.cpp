#include <iostream>
#include <vector>
using namespace std;

int vector_out(vector <int> &A){
    int n=A.size();
    for (int i=0; i<n; i++){
        cout << A[i];
        if (i!= n-1) cout<<" ";
        else cout<<endl;
    }
    return 0;
}

int countingsort(vector <int> &A, vector <int> &B, int k){
	vector <int> C(k+1,0);
	for (int i=0; i<(int)A.size(); i++)
		C[A[i]]++;
	for (int i=1; i<=k; i++)
		C[i] += C[i-1];
	for (int i=A.size(); 0<i; i--){
		int i2=i-1;
		B[C[A[i2]]-1] = A[i2];
		C[A[i2]] --;
	}
	return 0;
}

int main(void){
	int n, max=0;
	cin >> n;
	vector <int> A(n,0), B(n,0);
	for (int i=0; i<n; i++){
		cin >> A[i];
		if (max<A[i]) max=A[i];
	}
	countingsort(A, B, max);
	vector_out(B);
	return 0;
}