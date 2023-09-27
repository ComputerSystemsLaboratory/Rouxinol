#include <iostream>
using namespace std;
int main(){

  int n,a[2000],m,q;

  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>q;
    bool ch[4001]={1};
    for(int j=0;j<n;j++){
      for(int k=q-1;k>=0;k--) if(ch[k]) ch[k+a[j]]=1;
      if(ch[q]){
        cout<<"yes"<<endl;
        break;
      }

    }
    if(!ch[q]) cout<<"no"<<endl;
  }
  return 0;
}