#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb(x) push_back(x)
#define HAYAKU_HAYAKU ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    HAYAKU_HAYAKU; 
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    unsigned long long int prev=1,gr=1;
    int i;
    for (i = 1; i+k <= n; i++)
    {
        //out<<a[i]<<' '<<a[i+k]<<endl;
        a[i] < a[i+k] ? cout<<"Yes\n" : cout<<"No\n";
    }
    
}