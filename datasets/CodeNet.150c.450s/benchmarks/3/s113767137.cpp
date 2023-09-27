#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int main(){
	string str,W,p;
	long long int q,a,b;
	cin >> str >> q;
	REP(i,q){
		cin >> W >> a >> b;
		if (W == "print"){
			string c(str, a, b - a + 1);
			cout << c << "\n";
		}
		else if (W == "reverse"){
			reverse(str.begin() + a, str.begin() + b + 1);
		}
		else if (W == "replace"){
			cin >> p;
			str.replace(a, b - a + 1, p);

		}
	}
	return 0;
}