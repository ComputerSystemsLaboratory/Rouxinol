#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

vector<int> erts(){
  vector<int> v(1000001,1);
  v[0]=v[1]=0;
  for(int i=2;i<=1000;++i)
    if(v[i])
      for(int j=i*i;j<=1000000;j+=i)
        v[j]=0;
  return v;
}

int main() {
  vector<int> pl = erts();
  while(1){
    int a,d,n;
    cin>>a>>d>>n;
    if(!a)break;
    while(1){
      if(pl[a]){
        if(n==1){
          cout<<a<<endl;
          break;
        }else{
          --n;
        }
      }
      a += d;
    }
  }
  return 0;
}