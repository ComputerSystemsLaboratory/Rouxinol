/*==========================================================================*/
/*
    AUTHOR:    BPZ
	CREATED:   10.09.2020 18:04:20

*/
/*--------------------------------------------------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  const int maxn = (int)1e7 + 6;
  vector<int> ans(maxn, 0);
 	for (int i = 1; i <= 200; i++) {
 		for (int j = 1; j <= 200; j++) {
 			for (int k = 1; k <= 200; k++) {
 				int pos = pow(i + j, 2) + pow(i + k, 2) + pow(j + k, 2);
 				ans[pos/2]++;
 			}
 		}
 	}
 	for (int i = 1; i <= n; i++) {
 		cout << ans[i] << '\n';
 	}
  return 0;
}
