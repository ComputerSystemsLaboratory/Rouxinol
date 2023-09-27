#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

void g(int a){
	if(a/1000){
		if(a/1000>=2){
			cout<<a/1000;
		}
		cout<<"m";
	}
	a%=1000;
	if(a/100){
		if(a/100>=2){
			cout<<a/100;
		}
		cout<<"c";
	}
	a%=100;
	if(a/10){
		if(a/10>=2){
			cout<<a/10;
		}
		cout<<"x";
	}
	a%=10;
	if(a){
		if(a>=2){
			cout<<a;
		}
		cout<<"i";
	}
	cout<<endl;
}

int f(){
	string str;
	cin>>str;
	int i,res=0;
	int a=1;
	for(i=0;i<str.size();i++){
		if(str[i]=='m'){
			res+=a*1000;
			a=1;
		}else if(str[i]=='c'){
			res+=a*100;
			a=1;
		}else if(str[i]=='x'){
			res+=a*10;
			a=1;
		}else if(str[i]=='i'){
			res+=a;
			a=1;
		}else{
			a=str[i]-'0';
		}
	}
	return res;
}

int main() {
	int n=in();
	while(n--){
		int a,b;
		a=f();
		b=f();
		g(a+b);
	}
	return 0;
}