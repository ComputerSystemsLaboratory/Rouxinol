
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <cctype>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cassert>

using namespace std;


complex<int> Mov(char dir){
	char a[4] = {'N','W','S','E'};
	int dx[4] = {0,-1,0,1};
	int dy[4] = {1,0,-1,0};
	for(int i=0;i<4;i++){
		if(a[i]==dir){
			complex<int> mov(dx[i],dy[i]);
			return mov;
		}
	}
}

bool solve(){
	while(1){
		int jw[22][22] = {0};
		complex<int> rob(10,10);
		int n;
		cin>> n;
		if(!n) break;
		for(int i=0;i<n;i++){
			int x,y;
			cin>> x>> y;
			jw[x][y]++;
		}
		int m;
		cin>> m;
		int cnt=0;
		if(jw[10][10]){
			jw[10][10] = 0;
			cnt++;
		}
		for(int i=0;i<m;i++){
			char dir;
			int d;
			cin>> dir>> d;
			for(int j=0;j<d;j++){
				rob += Mov(dir);
				int x = rob.real();
				int y = rob.imag();
				if(jw[x][y]){
					jw[x][y] = 0;
					cnt++;
				}
			}
		}
		
		if(cnt==n){
			cout<< "Yes"<< endl;
		}else{
			cout<< "No"<< endl;
		}
	}
	
	return true;
}

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	solve();

	return 0;
}

 