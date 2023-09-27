#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  while(true){
    int m,f,r;
    cin>>m>>f>>r;
    if(m==-1&&f==-1&&r==-1)break;
    if(m==-1||f==-1)cout<<"F"<<endl;
    else if(m+f>=80)cout<<"A"<<endl;
    else if(m+f>=65)cout<<"B"<<endl;
    else if(m+f>=50)cout<<"C"<<endl;
    else if(m+f>=30){
      if(r>=50)cout<<"C"<<endl;
      else cout<<"D"<<endl;
    }else cout<<"F"<<endl;

  }
}

