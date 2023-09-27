//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
//#include <cstdio>
//#include <iomanip>//"cout<<fixed<<setprecision(n)<<sth<<endl;"
//#include <string>//"reverse(s's it,s's it)"
//#include <functional>//"greater<T>" "sort(a,a+n,greater<int>());""
//#include <cmath>//"abs" "sqrt"
//#include <numeric>//"accumulate(inputit,inputit,init,(optional) object)"
//#include <algorithm>//"lower_bound(it,it,v)" "next_permutation(a,a+n)"
//"reverse(v's it,v's it)"(v: vector)
using namespace std;
#define is insert

void solve(string s){
	set<string> st;
	for(int i=1;i<s.size();++i){
		string t[2][2];
		t[0][0]=s.substr(0,i);
		t[1][0]=s.substr(i,s.size()-i);
		for(int j=0;j<2;++j){
			t[j][1]=t[j][0];
			reverse(t[j][1].begin(),t[j][1].end());
		}
		for(int j=0;j<2;++j) for(int k=0;k<2;++k) for(int l=0;l<2;++l){
			string u=t[j][k];
			u+=t[1-j][l];
			st.is(u);
		}
	}
	cout<<st.size()<<endl;
}

int main(){
	int m;
	cin>>m;
	while((m--)>0){
		string s;
		cin>>s;
		solve(s);
	}
}