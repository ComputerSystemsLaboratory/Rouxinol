#include <bits/stdc++.h>
#define rep(i , n) for (int i = 0; i < (int)(n); i++)
const int INF = 1<<29;
using namespace std;
using ll = long long;
ll s , f[1000005] , a , b , n , q;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a;
		f[a]++;
		s += a;
	}
	cin >> q;
	while(q--){
		cin >> a >> b;
		f[b] += f[a];
		s = s - f[a] * a + f[a] * b;
		f[a] = 0;
		cout << s << endl;
	}
}
