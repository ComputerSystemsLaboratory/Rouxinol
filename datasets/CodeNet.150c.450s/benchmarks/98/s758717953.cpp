#include <iostream>
using namespace std;
int main(){
  for(int n,m;cin>>n>>m&&n;){
    int r0=0,r1=0,a[100],b[100],r=1e9,r2,r3;
    for(int i=0;i<n&&cin>>a[i];i++) r0+=a[i];
    for(int i=0;i<m&&cin>>b[i];i++) r1+=b[i];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){
        if(r0+b[j]-a[i]==r1+a[i]-b[j]&&r>b[j]+a[i]){
          r=b[j]+a[i];
          r2=a[i];
          r3=b[j];
        }
      }
    if(r==1e9) cout<<-1<<endl;
    else cout<<r2<<" "<<r3<<endl;
  }
  return 0;
}