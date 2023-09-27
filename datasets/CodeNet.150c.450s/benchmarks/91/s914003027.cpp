#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<ctime>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<vector>
#define mem(name,value) memset(name,value,sizeof(name))
#define loop(i,from,to) for(int i=from;i<to;i++)
#define loopr(i,from,to) for(int i=from;i>=to;i--)
#define pb push_back
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const int INF=0x3f3f3f3f;

const int maxn=1000000+5;
int pr[maxn];
bool is_pr[maxn];

int sieve(int n){
    int p=0;
    loop(i,0,n+1) is_pr[i]=true;
    is_pr[0]=is_pr[1]=false;
    loop(i,2,n+1){
        if(is_pr[i]){
            pr[p++]=i;
            for(int j=2*i;j<=n;j+=i)
                is_pr[j]=false;
        }
    }
    return p;
}

int main()
{
    int n;
    while(cin>>n)
        cout<<sieve(n)<<endl;
}