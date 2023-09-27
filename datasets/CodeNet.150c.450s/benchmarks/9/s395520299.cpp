#include<iostream>
#include<string>
using namespace std;
string str;
int inp(){
	int n,x;
	cin>>str;
	if(!str.compare("-"))return 0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>x;
		str=str.substr(x)+str.substr(0,x);
	}
	cout<<str<<endl;
	return 1;
}
int main(){
	while(inp());
	return 0;
}