#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,a;
  cin >> n;
  for(int i=0;i<n;i++){
    long long b=0,c=0;
    bool f=true;
    for(int j=0;j<10;j++){
      cin >> a;
      if(b<a){
        b=a;
      }else if(c<a){
        c=a;
      }else{
        f=false;
      }
    }
    cout << (f?"YES":"NO") << endl;
  }
  return 0;
}

