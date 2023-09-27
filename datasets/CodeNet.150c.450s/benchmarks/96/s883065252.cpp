//{{{
#define DEF
#ifdef DEF
#include <iostream>
#include <algorithm>
#include <functional>
#include <stack>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <cstring>
#include <cmath>
#include <set>
#include <deque>

//-----------------------------------------------------
#define mrepp(i,n,x)  for(int i = n-1; i >= x; i--)
#define mrep(i,n) mrepp(i,n,0)
#define repp(i,x,n)  for(int i = x; i < n; i++)
#define rep(i,n) repp(i,0,n)

using namespace std;
typedef pair<int, int> Pii;
typedef long long int llint;

template<typename T>
void display(T &t, int start_x, int start_y, int end_x, int end_y) {
	cout << "===================" << endl;
	repp(i,start_y,end_y) {
		repp(j,start_x,end_x)
			printf("%4d:", t[i][j]);
		cout << endl;
	}
	cout << "===================" << endl;
}

//-----------------------------------------------------
#endif
//}}}

char moji[10][6] = {
		{},
		{5,'.',',','!','?',' '},
		{3,'a','b','c'},
		{3,'d','e','f'},
		{3,'g','h','i'},
		{3,'j','k','l'},
		{3,'m','n','o'},
		{4,'p','q','r','s'},
		{3,'t','u','v'},
		{4,'w','x','y','z'},
};

void solve() {

}

int main(void) {

	int n;
	cin >> n;
	rep(g,n){
		string s;
		cin >> s;
		int flag = 0;
		int count = -1;
		int a;
		rep(h,(int)s.size()){
			if(s[h]=='0' && !flag)continue;
			if(s[h]=='0' && flag){
				flag = 0;
				count = count % moji[a][0] + 1;
				cout << moji[a][count] << flush;
				count = -1;
			}
			else{
				a = s[h]-'0';
				count++;
				flag = 1;
			}
		}
		cout << endl;
	}

	return 0;
}