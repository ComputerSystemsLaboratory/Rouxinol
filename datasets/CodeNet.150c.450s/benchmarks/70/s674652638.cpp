#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int cal[12]={31,29,31,30,31,30,31,31,30,31,30,31};//2は29,4,6,9,11は30
string ta[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};//1月１日が木曜日
int main(){
	int n,m,sum=0,now=0;
	while(cin>>n>>m,n||m){
	sum=0;
	for(int i=0;i<n;i++){
	if(i!=n-1)for(int j=0;j<cal[i];j++)sum++;
	else for(int j=0;j<m;j++)sum++;
	}
	cout<<ta[sum%7]<<endl;
	}
	return 0;
}