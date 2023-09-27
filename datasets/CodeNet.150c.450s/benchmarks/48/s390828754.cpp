#include <stdio.h>
#include <iostream>
#include <queue>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#define PB push_back
#define in scanf
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
using	namespace std;
void solve(){
	int e;
	while(cin >> e ,e!=0) {
	int m =1000000000;
	int x;
	for(int z=0;z*z*z<=e;z++){
		for(int y=0;y*y+z*z*z<=e;y++){
			x = e-y*y-z*z*z;
			m = min(x + y + z,m);
			
				
		}
	}
	cout << m  << endl;
	
}
}



	
int main(){
	solve();

}