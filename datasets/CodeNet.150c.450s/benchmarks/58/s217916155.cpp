#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int calc(string s, int a, int b){
	if(s == "+"){
		return a+b;
	}else if(s == "-"){
		return a-b;
	}else if(s == "*"){
		return a*b;
	}else if(s == "/"){
		return a/b;
	}
	return 1;
}

int main(void){
	stack<int> st;
	string S;
	int ans = 0;
	while(cin >> S){
		if(S == "+" ||S == "-" ||S == "*" ||S == "/"){
			int a = st.top();st.pop();
			int b = st.top();st.pop();
			ans = calc(S, b, a);
			st.push(ans);
		}else{
			int x = StrToInt(S);
			st.push(x);
		}
	}
	cout << ans << endl;

	return 0;
}



int StrToInt(string s){
	stringstream ss;
	ss << s;
	int val;
	ss >> val;
	return val;
}
string IntToStr(int i){
	stringstream ss;
	ss << i;
	return ss.str();
}