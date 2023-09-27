#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> int_pair;
typedef pair<ll,ll> ll_pair;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
const int N=100;
const int W=10000;
int n,w,v[N],wi[N];
int dp[N+1][W+1];


int main(){
	stack<ll> st;
	string s;
	getline(cin,s);
	ll i=0;
	while(i<s.size()){
		char c = s[i];
		if(c==' '){
			i++;
			continue;
		}
		if(c=='+'||c=='-'||c=='*'){
			ll x,y,z;
			x = st.top();
			st.pop();
			y = st.top();
			st.pop();
			if(c=='+')z = x+y;
			else if(c=='-')z=y-x;
			else z=x*y;
			st.push(z);
		}else{
			ll x = c - '0';
			while(s[i+1]<='9'&&s[i+1]>='0'){
				i++;
				x *= 10;
				x += s[i] - '0';
			}
			st.push(x);
		}
		i++;
	}
	cout<<st.top()<<endl;
}
