
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)


int main(){

	while(1){

		int n,p;
		cin >> n >> p;
		if(n == 0 && p == 0){
			break;
		}

		vector<int> h(n,0);

		int wan = p;
		int t = 0;

		while(1){
			if(wan > 0){
				h[t%n]++;
				wan--;
				if(wan == 0 && h[t%n] == p){
					cout << t%n << endl;
					break;
				}
			}
			else{
				wan = h[t%n];
				h[t%n] = 0;
			}
			t++;
		}
	}

	return 0;
}