#include <bits/stdc++.h>

#define MAX 1000005
#define INF 200000000
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

int dx[]={0,0,-1,+1,-1,+1};
int dy[]={-1,+1,0,0,-1,+1};

void IO()
{
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
}

bool flag;
int n,q,m;
int arr[25];

void Fun(int i, int sum)
{
    if(sum==m){
        flag=true;
        return;
    }
    if(i>=n)return;
    if(sum+arr[i]<=m&&!flag)Fun(i+1,sum+arr[i]);
    if(!flag)Fun(i+1,sum);
}

int main()
{
    //IO();
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d",&m);
        flag=false;
        Fun(0,0);
        if(flag)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}