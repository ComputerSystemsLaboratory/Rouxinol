#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
#include<queue>
#include<cmath>
#include<algorithm>
#include<bitset>
#include<utility>
#include<complex>
#include<cstdlib>
#include<set>
#include<cctype>

#define DBG cerr << '!' << endl;
#define REP(i,n) for(int i = (0);i < (n);++i)
#define rep(i,s,g) for(int i = (s);i < (g);++i)
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cerr << v[i] << ' ';cerr << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cerr << v[a][b] << ' ';cerr << endl;}cerr << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> iiv;
typedef vector<string> sv;


struct UF{
    vector<int> d;
    UF(int n):d(n,-1){}
    bool set(int x,int y){
        x=root(x),y=root(y);
        if(x!=y){if(d[y]<d[x])swap(x,y);d[x]+=d[y];d[y]=x;}
        return x!=y;
    }
    bool find(int x,int y){return root(x)==root(y);}
    int root(int x){
        while(d[x]>=0){if(d[d[x]]>=0)d[x]=d[d[x]];x=d[x];}
        return x;
    }
    int size(int x){return -d[root(x)];}
};


int main()
{
	int n,q;
	cin >> n >> q;
	UF uf(n);
	
	REP(i,q)
	{
		int s,x,y;
		cin >> s >> x >> y;
		if(s == 0)
		{
			uf.set(x,y);
		}
		else
		{
			bool ret = uf.find(x,y);
			cout << ret << endl;
		}
	}
	
	
	return 0;
}