#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
 
#define rep(n) for(int i=0; i<(n); i++)
#define pb(n) push_back((n))
 
//typedef long long ll;
 
using namespace std;

int gcd(int n,int m){
	//cout<<n<<" "<<m<<endl;
	if(n%m==0)return m;
	return gcd(m,n%m);
}

int x,y;

int main(){
	cin>>x>>y;
	cout<<gcd(x,y)<<endl;
}