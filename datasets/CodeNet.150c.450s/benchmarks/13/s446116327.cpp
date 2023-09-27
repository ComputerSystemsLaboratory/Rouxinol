#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	cin >>b;
	a=a+a;
	if(a.find(b)==-1)
	{cout <<"No"<<endl;}
	else{cout <<"Yes"<<endl;}
	return 0;
}