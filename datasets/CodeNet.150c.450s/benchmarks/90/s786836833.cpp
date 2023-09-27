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
int main(){
	int ta[300]={0};
	int n;
	while(cin>>n)ta[n]++;
	int ma=0;
	for(int i=1;i<=100;i++)if(ma<ta[i])ma=ta[i];
	for(int i=1;i<=100;i++)if(ma==ta[i])cout<<i<<endl;
	return 0;
}