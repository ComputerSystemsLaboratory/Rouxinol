#include<bits/stdc++.h>
  
using namespace std;
  
#define rep(i, n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define pb push_back

int main(){
	int n;
	cin>>n;

	rep(i,n){
		string s;
		set<string> st;

		cin>>s;

		repi(i,1,s.size()){
			string a,b,c,d;
			a=s.substr(0,i);
			b=s.substr(i,s.size());

			st.insert(a+b);
			st.insert(b+a);

			reverse(a.begin(),a.end());
			st.insert(a+b);
			st.insert(b+a);

			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			st.insert(a+b);
			st.insert(b+a);

			reverse(a.begin(),a.end());
			st.insert(a+b);
			st.insert(b+a);

		}
		cout<<st.size()<<endl;

	}
}