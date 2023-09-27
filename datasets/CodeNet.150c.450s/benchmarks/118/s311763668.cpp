//Millennium
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main(){
  int n;
  cin>>n;
  rep(i,n){
    int y, m, d;
    cin>>y>>m>>d;
    ll ans=0;
    while(!(y==1000 && m==1 && d==1)){
      if(y%3==0){ //3????????°?????´
        if(d==20){
          if(m==10){y++; m=1; d=1;}
          else{m++; d=1;}
        }
        else{
          d++;
        }
      }
      else{ //not3????????°?????´
        if(m%2==1){
          if(d==20){
            m++; d=1;
          }
          else{
            d++;
          }
        }
        else{
          if(d==19){
            if(m==10){y++; m=1; d=1;}
            else{m++; d=1;}
          }
          else{d++;}
        }
      }
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}