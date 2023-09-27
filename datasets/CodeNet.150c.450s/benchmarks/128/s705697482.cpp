#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
typedef long long int ll;

using namespace std;


string back(string s){
	string ret="";
	for(int i=s.size()-1;i>=0;i--){
		ret+=s[i];
	}
	return ret;
}

int main(){
	string s;
	cin>>s;
	cout<<back(s)<<endl;
	return 0;
}