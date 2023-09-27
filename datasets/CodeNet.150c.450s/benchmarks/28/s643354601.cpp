#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
typedef vector<ll> vl;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;


ll a[100000];

bool ok(ll x,ll k,ll n)
{
	ll p(0);
	ll count(1);
	REP(i,n)
	{
				if(a[i] > x){return false;}
		if(p+a[i]>x){	count++;	p = a[i];	}
		else{	p += a[i];	}
	}
	
	if(count>k){	return false;	}
	else{	return true;	}
}

int main() 
{
	ll n,k;
	cin >> n >> k;
	REP(i,n){	cin >> a[i];	}
	
	ll left(0),right(1000000000); //最大積載量
	
	while(left+1<right)
	{		
		ll med = (left + right)/2;
		if(ok(med,k,n)){	right =med;	}
		else {	left = med;	}
	}
	
	if(ok(left,k,n)) cout << left << endl;
	else cout << right << endl;
	
	return 0 ;
}