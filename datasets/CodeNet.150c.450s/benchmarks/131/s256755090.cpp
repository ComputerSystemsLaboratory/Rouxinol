#include <iostream>
#include <fstream>
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#pragma comment(linker, "/STACK:400000000")

#define EPS 1e-9
#define INF MOD
#define MOD 1000000007LL
#define fir first
#define foreach(it,X) for(it=X.begin();it!=X.end();it++)
#define iss istringstream
#define ite iterator
#define ll long long
#define mp make_pair
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<n;i++)
#define pi pair<int,int>
#define pb push_back
#define sec second
#define sh(i) (1LL<<i)
#define sst stringstream
#define sz size()
#define vi vector<int>
#define vc vector
#define vl vector<ll>
#define vs vector<string>

int a,L,mem[1000011],p10[7]={1};

int main(){
	rep2(i,1,7)p10[i]=p10[i-1]*10;
	while(cin>>a>>L && L){
		fill(mem,mem+1000011,-1);
		int t=0;
		while(1){
			if(mem[a]!=-1){
				cout<<mem[a]<<" "<<a<<" "<<t-mem[a]<<endl;
				break;
			}
			mem[a]=t;
			vi v;
			rep(i,L)v.pb(a/p10[i]%10);
			sort(v.begin(),v.end());
			int mi=0,ma=0;
			rep(i,L)mi=mi*10+v[i];
			reverse(v.begin(),v.end());
			rep(i,L)ma=ma*10+v[i];
			a=ma-mi;
			t++;
		}
	}
}