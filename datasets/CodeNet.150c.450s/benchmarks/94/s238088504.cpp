#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int,int>
#define ff first
#define ss second
#define sf(a) scanf("%d",&a)
#define MX 1100010
#define inf 1e9
#define m_p make_pair
#define pb push_back
#define mem(x,val) memset(x,val,sizeof(x))
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define FAST  ios_base::sync_with_stdio(0);cout.tie(0)
#define sqr(x) ((x)*(x))
#define MOD 100000

int main() {
    int n;
    sf(n);
    int arr[n];
    for(int i=0;i<n;i++) sf(arr[i]);

    int cnt = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i+1==n) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    printf("%d\n",cnt);
    return 0;
}

