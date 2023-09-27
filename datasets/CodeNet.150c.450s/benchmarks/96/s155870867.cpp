#include<iostream>
#include<sstream>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<utility>
using namespace std;
#define loop(i,l,r) for(int (i)=(int)(l);(i)<(int)(r);(i)++)
#define rloop(i,l,r) for(int (i)=(int)(l);(i)>(int)(r);(i)--)
#define rep(i,n) loop(i,0,n)
#define rrep(i,n) rloop(i,n-1,-1)
#define INF 0x3f3f3f3f
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

vector<string> split(stringstream& ss){
	string str;
	vector<string> res;
	while(ss>>str)res.push_back(str);
	return res;
}

int main(){
	int n,num;
	char table[9][5]={{'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
	string s;
	cin>>n;
	rep(i,n){
		cin>>s;
		num=0;
		rep(j,s.size()){
			if(s[j+1]=='0'){
				if(s[j]=='0')continue;
				else cout<<table[s[j]-'1'][s[j]-'1'==0?num%5:s[j]-'1'==6||s[j]-'1'==8?num%4:num%3];
				num=0;
			}else if(s[j+1]==s[j]){
				num++;
			}
		}
		cout<<endl;
	}
}