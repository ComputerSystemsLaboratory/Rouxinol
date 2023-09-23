#include <bits/stdc++.h>

#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define pmod 1000000007
#define maxn 100005
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )

using namespace std;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;

int main()
{while (1){ ll res=0;
int n,x;
    cin>>n>>x;
    if (n==0) return 0;
    FOR (i,1,n){
        FOR (j,i+1,n){
            FOR (k,j+1,n){
                if (j+k+i==x) res++;
            }
        }
    }
    cout<<res<<endl;
}

         return 0;
}