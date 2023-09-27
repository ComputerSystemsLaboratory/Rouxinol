#include <bits/stdc++.h>
#define FOR(v, a, b) for(int v = (a); v < (b); ++v)
#define FORE(v, a, b) for(int v = (a); v <= (b); ++v)
#define REP(v, n) FOR(v, 0, n)
#define REPE(v, n) FORE(v, 0, n)
#define RS resize
#define CLR clear
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
using namespace std;

int main(){
	int a, b, n, x, y;
	vector< vector< int > > field;
	
	while(cin >> a >> b, a){
		cin >> n;
		
		field.RS(a);
		REP(i, a){
			field[i].RS(b);
			REP(j, b) field[i][j] = 0;
		}
		
		REP(i, n){
			cin >> x >> y;
			field[x-1][y-1] = -1;
		}
		
		field[0][0] = 1;
		REP(i, a){
			REP(j, b){
				if(field[i][j] != -1){
					if(i > 0) field[i][j] += (field[i-1][j] != -1 ? field[i-1][j] : 0);
					if(j > 0) field[i][j] += (field[i][j-1] != -1 ? field[i][j-1] : 0);
				}
			}
		}
		
		cout << field[a-1][b-1] << endl;
	}
	
	return 0;
}