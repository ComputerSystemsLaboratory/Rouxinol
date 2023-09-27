#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<ctime>
#include<cstdlib>
#include<numeric>
#include<typeinfo>
#include<cstdio>
#include<cctype>
#include<list>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(i=a;i>=b;i--)
const int inf=1e8;
const ll INF=1e16;
#define MOD 1000000007
#define mod 1000000009

 
int main(){
	int i,n,q,j;
	cin>>n;
	vector<int> s(n+1);
	loop(i,0,n){
		cin>>s[i];
	}
	cin>>q;
	int sum=0;
	loop(i,0,q){
		int t;
		cin>>t;
		s[n]=t;
		j=0;
		while(s[j]!=s[n]){
			j++;
		}
		if(j!=n){
			sum++;
		}
	}
	cout<<sum<<endl;
}