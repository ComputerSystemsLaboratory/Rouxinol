//1431
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cassert>
#include<sstream>
#include<iostream>
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

typedef unsigned uint;
typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;

int dec(string s){
	int ans=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='m'){
			if(i>0 && s[i-1]>='1' && s[i-1]<='9'){
				ans+=1000*(s[i-1]-'0');
			}else{
				ans+=1000;
			}
		}
		if(s[i]=='c'){
			if(i>0 && s[i-1]>='1' && s[i-1]<='9'){
				ans+=100*(s[i-1]-'0');
			}else{
				ans+=100;
			}
		}
		if(s[i]=='x'){
			if(i>0 && s[i-1]>='1' && s[i-1]<='9'){
				ans+=10*(s[i-1]-'0');
			}else{
				ans+=10;
			}
		}
		if(s[i]=='i'){
			if(i>0 && s[i-1]>='1' && s[i-1]<='9'){
				ans+=1*(s[i-1]-'0');
			}else{
				ans+=1;
			}
		}
	}
	return ans;
}
string enc(int a){
	string ret;
	if(a/1000==1) ret+='m';
	if(a/1000>1){
		ret+=('0'+a/1000);
		ret+='m';
	}
	a%=1000;
	if(a/100==1) ret+='c';
	if(a/100>1){
		ret+=('0'+a/100);
		ret+='c';
	}
	a%=100;
	if(a/10==1) ret+='x';
	if(a/10>1){
		ret+=('0'+a/10);
		ret+='x';
	}
	a%=10;
	if(a/1==1) ret+='i';
	if(a/1>1){
		ret+=('0'+a/1);
		ret+='i';
	}
	return ret;
}

int main(){
	int n;
	cin >> n;
	string a,b;
	int i;
	for(i=0;i<n;i++){
		cin >> a >> b;
		cout << enc(dec(a)+dec(b)) << endl;
	}
	
	return 0;
}
	