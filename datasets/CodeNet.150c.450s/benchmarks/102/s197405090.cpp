#include <bits/stdc++.h>
#define FOR(v, a, b) for(int v = (int)(a); v < (int)(b); ++v)
#define FORE(v, a, b) for(int v = (int)(a); v <= (int)(b); ++v)
#define REP(v, n) FOR(v, 0, n)
#define REPE(v, n) FORE(v, 0, n)
#define RS resize
#define CLR clear
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
#define C complex
#define CI complex< int >
#define CD complex< double >
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
	
	int w, h, x, y, cnt;
	vector< vector< char > > field;
	stack< CI > st;
	
	while(cin >> w >> h , w){
		field.RS(h);
		REP(i, h){
			field[i].RS(w);
			REP(j, w){
				cin >> field[i][j];
				if(field[i][j] == '@'){
					x = j;
					y = i;
					field[i][j] = '.';
				}
			}
		}
		
		st.push(CI(x, y));
		cnt = 0;
		
		while(!st.empty()){
			complex< int > cur = st.top();
			st.pop();
			
			if(field[cur.imag()][cur.real()] != '.') continue;
			
			field[cur.imag()][cur.real()] = '#';
			++cnt;
			
			if(cur.imag() > 0){
				if(field[cur.imag() - 1][cur.real()] == '.'){
					st.push(cur + CI(0, -1));
				}
			}
			if(cur.imag() < h - 1){
				if(field[cur.imag() + 1][cur.real()] == '.'){
					st.push(cur + CI(0, 1));
				}
			}
			if(cur.real() > 0){
				if(field[cur.imag()][cur.real() - 1] == '.'){
					st.push(cur + CI(-1, 0));
				}
			}
			if(cur.real() < w - 1){
				if(field[cur.imag()][cur.real() + 1] == '.'){
					st.push(cur + CI(1, 0));
				}
			}			
		}
		
		cout << cnt << endl;
	}
	
	return 0;
}