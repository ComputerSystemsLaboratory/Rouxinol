#include <iostream>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cctype>
using namespace std;
#define INF 0x3f3f3f3f
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>L;X--)
#define DEP2(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef vector<PII> VII;
typedef vector<int> VI;
#define X first
#define Y second
#define lson(X) ((X)<<1)
#define rson(X) ((X)<<1|1)
const int maxn=1e5+5;

int n,m,a[maxn];
int b[maxn],c[maxn];
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n=10;
		REP(i,n) cin>>a[i];
		CLR(b,0);CLR(c,0);
		b[0]=a[0];
		int p=0,q=0,i=1;
		for(i=1;i<n;i++){
			int num=a[i];
			if(b[p]>=c[q]){
				if(num>b[p] && num>c[q]) b[++p]=num;
				else if(num>c[q] && num<b[p]) c[++q]=num;	
				else break;
			}
			
			else{
				if(num>b[p] && num>c[q]) c[++q]=num;
				else if(num>b[p] && num<c[q]) b[++p]=num;	
				else break;				
			}
		}
		if(i==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}