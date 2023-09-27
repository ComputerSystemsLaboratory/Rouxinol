#include <iostream>
#include <algorithm>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int n;

int main(){
	while(1){
		cin >> n;
		if(!n){
			break;
		}
		int s = 0, p = 0;
		rep(i, n){
			int a, b;
			cin >> a >> b;
			s += (a + b);
			if(a >= b){
				p += a > b ? a + b : a; 
			}
		}
		cout << p << ' ' << s - p << endl;
	}
	return 0;
}