#include <iostream>
#include <cstdio>

using namespace std;

#define print(a) printf("%d\n", a)

#define FOR(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

#define MAX(a,b) ((a)>(b)?(a):(b))


int main(){
	int co, mod, ch;
	
	while (cin >> co , co != 0){
		ch = 0;
		
		mod = 1000 - co;
	
		ch += mod/500;
		mod = mod%500;
	
		ch += mod/100;
		mod = mod%100;
	
		ch += mod/50;
		mod = mod%50;
	
		ch += mod/10;
		mod = mod%10;
	
		ch += mod/5;
		mod = mod%5;
	
		ch += mod;
	
		cout << ch << endl;
	}
	
	return 0;
}