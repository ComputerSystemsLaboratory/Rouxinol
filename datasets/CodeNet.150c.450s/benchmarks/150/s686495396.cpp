#include <iostream>
#include <vector>
using namespace std;

void CountingSort(const vector<int> &A, vector<int> &B, int k)
{
    int n = A.size();
	vector<int> C;
	C.resize(k+1);
	for(int i = 0; i <= k; i++){
		C[i] = 0;
	}
	/* C[i] ??? i ???????????°????¨?????????? */
	for(int j = 0; j < n; j++){
		C[A[j]]++;
	}
	/* C[i] ??? i ??\????????°???????????°????¨??????????*/
	for(int i = 1; i <= k; i++){
		C[i] = C[i] + C[i-1];
	}
	
	for(int j = n-1; j >= 0; j--){
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}	
}
int main()
{
	int n;
	int k = 10000;
	cin >> n;
	vector<int> A;
	vector<int> B;
	A.resize(n);
	B.resize(n+1);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	CountingSort(A, B, k);
	for(int i = 1; i < n; i++){
		cout << B[i] << ' ';
	}
	cout << B.back() << endl;
	return 0;
}