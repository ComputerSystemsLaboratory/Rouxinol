#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int ta[10];
bool dfs(int h,int a,int b){
	if(h==10)return true;
	int now=ta[h];
	bool ret=0;
	if(now>a)ret=dfs(h+1,now,b);
	if(now>b)ret=dfs(h+1,a,now);
	return ret;
}

int main(){
	int n;
	cin>>n;
for(int i=0;i<n;i++){
for(int i=0;i<10;i++)cin>>ta[i];
(dfs(0,0,0))?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
	return 0;
}