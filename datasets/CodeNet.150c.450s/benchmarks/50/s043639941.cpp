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
int main(){
	int t[]={500,100,50,10,5,1};
	int n,cnt=0;
	while(cin>>n,n){
	cnt=0;
	n=1000-n;
	for(int i=0;i<6;i++){
	while(t[i]<=n)n-=t[i],cnt++;
	}
	cout<<cnt<<endl;
	}
	return 0;
}