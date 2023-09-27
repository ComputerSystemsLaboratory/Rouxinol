#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;
const int INF = 0x3f3f3f3f;

int main(){
	int S[10005], T[10005];
	int n, q, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> S[i];
	cin >> q;
	for(int i = 0; i < q; i ++)
		cin >> T[i];
	for(int i = 0; i < q; i ++)
		for(int j = 0; j < n; j ++)
			if(S[j] == T[i]){
				ans++;
				break;
			}
	cout<<ans<<endl;
	return 0;
}