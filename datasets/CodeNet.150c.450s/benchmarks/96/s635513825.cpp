#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int n,r[]={5,3,3,3,3,3,4,3,4};
char c[][5]={{},{'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
string s;

int main(){
	cin>>n;
	while(n--){
		cin>>s;
		int cur1=0,cur2=0;
		rep(i,s.size()){
			int m=s[i]-'0';
			if(!m){
				if(cur1){cout<<c[cur1][cur2];cur1=0;}
			}
			else{
				if(!cur1){cur1=m;cur2=0;}
				else cur2=(cur2+1)%r[cur1-1];
			}
		}
		cout<<endl;
	}
}