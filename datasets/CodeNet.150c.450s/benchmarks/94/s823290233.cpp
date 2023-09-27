#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int N;
vector<int> A;

int bubbleSort(){
	int cnt = 0;
	bool has_swap = true;
	while(has_swap){
		has_swap = false;
		for (int i = N-1;i >= 1;i--){
			if(A[i] < A[i-1]){
				swap(A[i],A[i-1]);
				cnt++;
				has_swap = true;
			}
		}
	}
	return cnt;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin >> N;

	A = vector<int>(N);
	for (int i = 0;i < N;i++){
		cin >> A[i];
	}

	int num_swap = bubbleSort();

	for (int i = 0;i < N;i++){
		cout << A[i] << (i == N-1?"\n":" ");
	}

	cout << num_swap << endl;

	return 0;

}

