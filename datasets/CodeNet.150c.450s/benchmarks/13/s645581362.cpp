#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

//ITP1_8
int main(){
	string a;
	cin>>a;
	string s=a+a;
	string p;
	cin>>p;
	if(s.find(p)!=string::npos)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	

return 0;
}