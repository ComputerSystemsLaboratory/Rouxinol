#include <iostream>
#include <cstdio>

using namespace std;

#define print(a) printf("%d\n", a)

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

#define MAX(a,b) ((a)>(b)?(a):(b))


int main(){
	int s = 0, t = 0, tmp;
	
	REP(i,4){
		cin >> tmp;
		s += tmp;
	}
	
	REP(i,4){
		cin >> tmp;
		t += tmp;
	}
	
	print(MAX(s,t));
	
	return 0;
}