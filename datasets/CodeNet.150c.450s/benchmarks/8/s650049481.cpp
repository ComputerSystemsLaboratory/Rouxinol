#include <iostream>
#include <string>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)

int main(){
	string W,T;
	long long int n, x = 0, y = 0;
	cin >> n;
	REP(i, n){
		cin >> W >> T;
		if (W > T){
			x += 3;
		}
		else if (W < T){
			y += 3;
		}
		else{
			x++;
			y++;
		}
	}
	cout << x << " " << y << '\n';
	return 0;
}