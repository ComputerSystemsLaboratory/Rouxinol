#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define INT(a) int((a)+1e-9)


int main(){
	while(true){
		int n,x,r; r=0;
		cin >> n >> x;			if(!n) return 0;
		FOR(i,1,n+1) FOR(j,i+1,n+1) FOR(k,j+1,n+1) if(i+j+k==x) r++;
		cout<<r<<endl;
	}
}