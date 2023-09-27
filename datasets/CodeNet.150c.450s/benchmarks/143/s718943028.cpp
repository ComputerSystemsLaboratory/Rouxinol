#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100000
int a[N];
signed main()
{
    int test=1;
    //cin>>test;
    while(test--){
      int n;
      cin>>n;
      int b,s=0;
      for(int i=0;i<n;i++){
        cin>>b;
        a[b]++;
        s+=b;
      }
      int q,c,bc,cc;
      cin>>q;
      for(int i=0;i<q;i++){
        cin>>b>>c;
        bc=a[b];
        s=s-bc*b+bc*c;
        a[c]+=bc;
        a[b]-=bc;
        cout<<s<<"\n";
      }

      
    }
    

    return 0;
}
