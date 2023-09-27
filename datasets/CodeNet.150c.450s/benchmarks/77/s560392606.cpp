#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)

int main(){
	while(true){
		int gl;
		cin>>gl;			if(!gl) return 0;
		bool mss[21][21];	//sokoni gem ga aru
		REP(x,21) REP(y,21) mss[x][y]=false;
		REP(gi,gl){
			int gx,gy;
			cin>>gx>>gy;
			mss[gx][gy]=true;
		}

		int ol;
		cin>>ol;
		int px=10,py=10;
		mss[px][py]=false;
		REP(oi,ol){
			char vc; int kl;
			cin>>vc>>kl;
			if(vc=='N') REP(k,kl) mss[px][++py]=false;
			if(vc=='S') REP(k,kl) mss[px][--py]=false;
			if(vc=='E') REP(k,kl) mss[++px][py]=false;
			if(vc=='W') REP(k,kl) mss[--px][py]=false;
		}

		bool re=false;
		REP(x,21) REP(y,21) re = re || mss[x][y];

		cout << (re?"No":"Yes") << endl;
	}
}