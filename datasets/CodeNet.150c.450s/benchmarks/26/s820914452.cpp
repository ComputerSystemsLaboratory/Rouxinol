#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;
 /*temp*/
 
 
int main(){
	int a, b;
	cin >> a >> b;
	cout << "a ";
	if(a < b)
		cout << "<";
	else if(a == b)
		cout << "==";
	else if(a > b)
		cout << ">";
	cout << " b\n";
	return 0;
}