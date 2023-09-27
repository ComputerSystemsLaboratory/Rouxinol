#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
	int n;
	cin>>n;
	string s;
	int a=0,b=0,c=0,d=0;
	rep(i,n){
		cin>>s;
		if(s=="AC")a++;
		if(s=="WA")b++;
		if(s=="TLE")c++;
		if(s=="RE")d++;
	}
	cout<<"AC x "<<a<<"\n";
	cout<<"WA x "<<b<<"\n";
	cout<<"TLE x "<<c<<"\n";
	cout<<"RE x "<<d<<"\n";
	return 0;
}