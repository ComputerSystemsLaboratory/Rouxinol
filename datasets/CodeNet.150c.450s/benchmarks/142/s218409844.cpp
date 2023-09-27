#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define inf 100000000000000000
#define mod 1000000007
#define MAX 200005
#define pb push_back
#define vit vector<int>::iterator
typedef pair<int,int> pii;
map<int,int>M;
vector<int> V[MAX];
int A[MAX];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=(n-k);i++){
        if(A[i+k]>A[i])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}