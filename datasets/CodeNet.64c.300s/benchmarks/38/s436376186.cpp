#include<cstdio>
#include<iostream>
#include <algorithm>
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
#define push_back pb
using namespace std;
typedef long long ll;

const int maxn=10;
int T,A[maxn+2],B[maxn+2],C[maxn+2];
int x,y;

bool dfs(int a)
{
    if(a==maxn) return true;
    if(A[a]<B[x-1] && A[a]<C[y-1]) return false;
    else if(A[a]>B[x-1]) B[x++]=A[a];
    else if(A[a]>C[y-1]) C[y++]=A[a];
    return dfs(a+1);
}

int main()
{
    cin>>T;
    while(T--){
        for(int i=0;i<maxn;i++)
            cin>>A[i];
        mem(B,0);
        mem(C,0);
        x=y=1;
        if(dfs(0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}