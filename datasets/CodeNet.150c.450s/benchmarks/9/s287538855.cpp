#include <iostream>
#include <string>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int main(){
	string W, s;
	long long int m, h[100], l;
	while (1){
		cin >> W;
		if (W == "-")break;
		l = W.length();
		cin >> m;
		REP(i, m){
			cin >> h[i];
			s = W.substr(0, h[i]);
			W += s;
			W = W.substr(h[i], W.length());
		}
		cout << W << '\n';
	}
	return 0;
}