#include <bits/stdc++.h>
#define FOR(v, a, b) for(int v = (int)(a); v < (int)(b); ++v)
#define FORE(v, a, b) for(int v = (int)(a); v <= (int)(b); ++v)
#define REP(v, n) FOR(v, 0, n)
#define REPE(v, n) FORE(v, 0, n)
#define RS resize
#define CLR clear
#define PB push_back
#define PF push_front
#define ALL(x) (x).begin(), (x).end()
using namespace std;

void split(string str, char chr, vector< string > *res){
	stringstream ss(str);
	string itm;
	while(getline(ss, itm, chr)){
		(*res).PB(itm);
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, r, p, c;
	list< int > l1, l2;
	
	while(cin >> n >> r, n){
		l1.CLR();
		l2.CLR();
		
		REP(i, n){
			l1.PF(i + 1);
		}
		
		REP(i, r){
			cin >> p >> c;
			
			list< int >::iterator bitr = l1.begin(), eitr = l1.begin();
			advance(bitr, p - 1);
			advance(eitr, p + c - 1);
			
			l2.splice(l2.begin(), l1, bitr, eitr);
			
			l1.splice(l1.begin(), l2);
		}
		
		cout << l1.front() << endl;
	}
	
	return 0;
}