#include <bits/stdc++.h>
using namespace std;
long long inversion_number(vector<int> &A){
	int N = A.size();
	vector<int> B = A;
	sort(B.begin(), B.end());
	map<int, int> mp;
	for (int i = 0; i < N; i++){
		mp[B[i]] = i + 1;
	}
	for (int i = 0; i < N; i++){
		A[i] = mp[A[i]];
	}
	long long ans = 0;
	vector<int> BIT(N + 1, 0);
	for (int i = 0; i < N; i++){
		ans += i;
		int j = A[i];
		while (j > 0){
			ans -= BIT[j];
			j -= j & -j;
		}
		j = A[i];
		while (j <= N){
			BIT[j]++;
			j += j & -j;
		}
	}
	return ans;
}
int main(){
  int n;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++){
    cin >> A[i];
  }
  cout << inversion_number(A) << endl;
}
