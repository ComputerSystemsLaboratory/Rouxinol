#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <tuple>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int h,w;
    cin>>h>>w;
    if(!h)break;
    tuple<int,int> res(190,190);
    for(int i = 1;i <= 190;++i){
      for(int j = i+1;j <= 190;++j){
        if(i*i+j*j>h*h+w*w||(i*i+j*j==h*h+w*w&&i>h)){
          int k,l;
          tie(k,l)=res;
          if(i*i+j*j<k*k+l*l||(i*i+j*j==k*k+l*l&&i<k)){
            res=make_tuple(i,j);
          }
        }
      }
    }
    cout<<get<0>(res)<<' '<<get<1>(res) <<endl;
  }
  return 0;
}