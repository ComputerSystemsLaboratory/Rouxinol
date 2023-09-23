#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <numeric>
#include <stack>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <strstream>
using namespace std;
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
typedef long long ll;

int x=10,y=10;

int measure(char c,int m,bool jewel[][21],int flag){
	if(c == 'N'){
		rep(i,m){
			y++;
			if( jewel[x][y] ){
				flag++;
				jewel[x][y] = false;
			}
		}
	}
	else if(c == 'E'){
		rep(i,m){
			x++;
			if( jewel[x][y] ){
				flag++;
				jewel[x][y] = false;
			}
		}
	}
	else if(c == 'S'){
		rep(i,m){
			y--;
			if( jewel[x][y] ){
				flag++;
				jewel[x][y] = false;
			}
		}
	}
	else if(c == 'W'){
		rep(i,m){
			x--;
			if( jewel[x][y] ){
				flag++;
				jewel[x][y] = false;
			}
		}
	}
	return flag;
}

int main(){
	int n,m;

	while( cin >> n ,n){
		x=10,y=10;
		bool jewel[21][21] = {0};
		int flag = 0;
		
		rep(i,n){
			int x,y;
			cin >> x >> y;
			jewel[x][y] = true;
		}
		
		cin >> m;
		
		rep(i,m){
			char compass;
			int di;
			cin >> compass >> di;
			flag += measure(compass,di,jewel,0);
		}
		if( n == flag ) puts("Yes");
		else puts("No");
	}
	return 0;
}