#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<ctime>
#include<cstdlib>
#include<numeric>
#include<typeinfo>
#include<cstdio>
#include<cctype>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
const int inf=1e8;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009

int main(void){
	string s;
	int a,b;
	stack<int> st;
	while(cin>>s){
		if(s=="+"){
			a=st.top();st.pop();
			b=st.top();st.pop();
			st.push(a+b);
		}else if(s=="-"){
			a=st.top();st.pop();
			b=st.top();st.pop();
			st.push(b-a);
		}else if(s=="*"){
			a=st.top();st.pop();
			b=st.top();st.pop();
			st.push(a*b);
		}else{
			st.push(atoi(s.c_str()));
		}
	}
	cout<<st.top()<<"\n";
}