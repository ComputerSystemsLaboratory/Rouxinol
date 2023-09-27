#include<iostream>
#include<map>
#include<vector>
#include<list>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define all(c) (c).begin(), (c).end()

using namespace std;
template<class T> inline void chmax(T& a, T b) { if(b > a) a = b; }
template<class T> inline void chmin(T& a, T b) { if(b < a) a = b; }


int main() {
	int T;
	int num=0,back_number;
	int index_tok=-1;
	int len_tokens[10] = {0,5,3,3,3,3,3,4,3,4};
	int tokens[10][5] = {
		{'#','#','#','#','#'},
		{'.',',','!','?',' '},
		{'a','b','c','#','#'},
		{'d','e','f','#','#'},
		{'g','h','i','#','#'},
		{'j','k','l','#','#'},
		{'m','n','o','#','#'},
		{'p','q','r','s','#'},
		{'t','u','v','#','#'},
		{'w','x','y','z','#'}
	};

	cin >> T;
	string a_str;
	rep(t,T) {
		cin >> a_str;
		back_number = 0;
		rep(i,a_str.size()) 
		{
			num = a_str[i] - '0';
			if (num == 0) {
				if (back_number != 0) {
					char a_char = tokens[back_number][index_tok];
					cout << a_char;
					index_tok = -1; //Enterしたら、一番先頭へ
				}
			}
			else {
				index_tok = (index_tok+1) % len_tokens[num];
			}
			back_number=num;
		}
		cout << endl;
	}

	return 0;
}