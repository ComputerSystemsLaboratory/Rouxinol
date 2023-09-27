#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string a;
	getline(cin,a);
	for(int b=0;b<a.length();b++){
		if(a[b]>='a'&&a[b]<='z')cout<<(char)(a[b]-32);
		else if(a[b]>='A'&&a[b]<='Z')cout<<(char)(a[b]+32);
		else cout<<a[b];
		}
		cout<<endl;
}