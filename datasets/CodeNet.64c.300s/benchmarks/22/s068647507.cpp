#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<iomanip>
#include<fstream>
#include<sstream>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define si size()
#define fr front()
#define ba back()
#define tp top()

typedef long long int ll;
typedef long double ld;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef pair<pii,int> ppi;
typedef pair<int,pii> pip;
typedef pair<pii,pii> ppp;
typedef pair<double,double> pdd;
typedef pair<double,pdd> pddd;

#define CASE() for(int Case=1;Case<=Tc;Case++)
#define iofast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const int adj[8][2]={{-1,0},{0,-1},{1,0},{0,1},{-1,-1},{-1,1},{1,1},{1,-1}};
const int INF=1e9;
const ll MOD=1e9+7;
const double EPS=1e-9;
const int SIZE=64;

int main (){
	
	int N;
	int a, b, c;
	scanf("%d", &N);
	while(N--){
		scanf("%d %d %d", &a, &b, &c);
		if(((a*a)+(b*b)==(c*c)) || ((c*c)+(b*b)==(a*a)) || ((a*a)+(c*c)==(b*b))) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}	
