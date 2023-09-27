
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)


int main(){
	while(1){
		int n,r;
		cin >> n >> r;
		if(n == 0 && r == 0){
			break;
		}

		vector<int> m(n);
		rep(i,n){
			m[i] = n - i;
		}

		rep(i,r){
			int p, c;
			cin >> p >> c;
			vector<int> w;

			REP(i,p-1,p-1+c){
				w.push_back(m[i]);
			}

			REP(i,0,p-1){
				w.push_back(m[i]);
			}

			REP(i,p-1+c,n){
				w.push_back(m[i]);
			}
			m = w;
		}
		cout << m[0] << endl;
	}
	return 0;
}