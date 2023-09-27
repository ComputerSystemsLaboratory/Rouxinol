#include <iostream>
#include <string>
using namespace std;

#define INF 1000000007LL
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<n;i++)
#define sz size()

int n;
string s[2];

int f(char c){
	if(c=='m')return 1000;
	if(c=='c')return 100;
	if(c=='x')return 10;
	return 1;
}

int main(){
	cin>>n;
	while(cin>>s[0]>>s[1]){
		int S[2]={},mul=1;
		rep(i,2)rep(j,s[i].sz){
			if(isdigit(s[i][j]))mul=s[i][j]-'0';
			else{
				S[i]+=mul*f(s[i][j]);
				mul=1;
			}
		}
		S[0]+=S[1];
		string t="mcxi";
		int u[]={1000,100,10,1};
		rep(i,4){
			int x=S[0]/u[i]%10;
			if(x>1)cout<<x;
			if(x>0)cout<<t[i];
		}
		cout<<endl;
	}
}