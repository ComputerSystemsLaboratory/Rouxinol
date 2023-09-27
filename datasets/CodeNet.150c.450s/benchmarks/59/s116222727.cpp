#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int N;
vector<int> A;

void insertionSort(){
	for (int i = 1;i < N;i++){
		int v = A[i];
		int j = i-1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		for (int k = 0;k < N;k++){
			cout << A[k] << (k==N-1?"\n":" ");
		}
	}
	return;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> N;

	A = vector<int>(N);
	for (int i = 0;i < N;i++){
		cin >> A[i];
		cout << A[i] << (i==N-1?"\n":" ");
	}

	insertionSort();

	return 0;

}

