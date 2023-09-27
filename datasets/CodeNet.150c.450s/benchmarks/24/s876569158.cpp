#include <iostream>
#include <algorithm>
#include <map>
#include <functional>
#define fi first
#define sec second
using namespace std;
typedef pair<int,int> P;

int main(){
	int n,m;
	while(cin >> n >> m,n||m){
		P p[10000];
		for(int i = 0; i < n; i++) cin >> p[i].sec >> p[i].fi;
		sort(p,p+n,greater<P>());
		for(int i = 0; i < n; i++){
			if(p[i].sec >= m){
				p[i].sec -= m;
				break;
			}
			m -= p[i].sec;
			p[i].sec = 0;
		}
		int ans = 0;
		for(int i = 0; i < n; i++) ans += p[i].fi*p[i].sec;
		cout << ans << endl;
	}
}