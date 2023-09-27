#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#define REP(i,a) for(int i = 0; i < (a); i++)
using namespace std;

int main(){
	int m,nmin,nmax;
	while(cin >> m >> nmin >> nmax){
		if(m == 0 && nmin == 0 && nmax == 0)break;
		int p[m];
		REP(i, m)cin >> p[i];
		int max = 0;
		int res;
		for(int i = nmin; i < nmax + 1; i++){
			if(p[i - 1] - p[i] >= max){
				max = p[i - 1] - p[i];
				res = i;
			}
		}
		cout << res << endl;
	}
}
