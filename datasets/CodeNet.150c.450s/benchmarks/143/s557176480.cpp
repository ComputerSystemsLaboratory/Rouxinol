#include <bits/stdc++.h>

using namespace std;

int main(){

	int N; cin >> N;
	vector<int> arr(N);
	vector<int> F(100001,0);
	long long int sum = 0;
	for(int i = 0; i < N; ++i){
	       	cin >> arr[i];
		sum += arr[i];
		++F[arr[i]];
	}

	int Q; cin >> Q;
	for(int i = 0; i < Q; ++i){
		int x,y;
		cin >> x >> y;
		sum = (y-x)*F[x] + sum;
		cout << sum << "\n";
		F[y] += F[x];
		F[x] = 0;
	}


}