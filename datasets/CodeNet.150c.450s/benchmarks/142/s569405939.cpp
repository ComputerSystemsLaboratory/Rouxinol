#include<iostream>
using namespace std;
#define FIO \
    freopen("input.txt","r",stdin); \
    freopen("output.txt","w",stdout);
int main()
{
    //FIO;
    int n,k; cin>>n>>k;
   long long int a[n]; for(int i = 0 ; i < n; i++) cin>>a[i];
    for(int i = k; i < n; i++)
    {
        if(a[i-k]<a[i])
          cout<<"Yes\n";
        else
          cout<<"No\n";
        
    }
    return 0;
}