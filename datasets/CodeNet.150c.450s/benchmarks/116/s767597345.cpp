#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long n,k;
  while(cin>>n>>k){
    if (n == 0) break;
    vector<long long> a(n);
    vector<long long> s(n+1);
    for(long long i=0; i<n; i++){
      cin>>a[i];
    }
    for(long long i=0; i<n; i++){
      s[i+1]=s[i]+a[i];
    }
    long long ans=-1e9;
    
    for(long long i=0; i<=n-k; i++){
      long long val =s[i+k]-s[i];
      if(ans<val) ans=val;
    }
    cout<<ans<<endl;
  }
  
}
