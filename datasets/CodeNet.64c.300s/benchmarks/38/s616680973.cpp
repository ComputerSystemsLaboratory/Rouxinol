#include <iostream>
using namespace std;
int main(void){
  int n;
  cin>>n;
  while(n--){
    int ans=1;
    for(int i=0,a,p=0,q=0;i<10;++i){
      cin>>a;
      if(ans){
          if(p>=a&&q>=a) ans=0;
          else{
            if(p>q) (p<a)?p=a:q=a;
            else (q<a)?q=a:p=a;
          }
      }
    }
    cout<<(ans?"YES":"NO")<<endl;
  }
  return 0;
}