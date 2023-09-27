//compiledef
#include <bits/stdc++.h>
#define rep(i, n) for(i=0;i<(n);i++)
#define per(i, n) for(i=(n);i>0;i--)
#define repx(i, n, x) for(i=(x);i<(n);i++)
#define xper(i, n, x) for(i=(n);i>(x);i--)
#define pback push_back

//c++def
using namespace std;
typedef long long int ll;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
int a[265];
int near(char t, int i){
	if(t == 'p') return floor(i/2);
	if(t == 'l') return i*2;
	if(t == 'r') return i*2+1;
	return 0;
}

int main(){
	int tmp;
	int n;
	int i;
	cin >>n;
	for(i = 1;i<=n;i++){
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n;i++){
		cout << "node "<< i<<": key = "<<a[i]<<", ";
		tmp = near('p', i);
		if(tmp<=n && tmp >0) cout << "parent key = "<< a[tmp] << ", ";
		tmp = near('l', i);
		if(tmp<=n && tmp >0) cout << "left key = " << a[tmp] << ", ";
		tmp = near('r', i);
		if(tmp<=n && tmp >0) cout << "right key = " << a[tmp] << ", ";
		cout << endl;
	}
}

