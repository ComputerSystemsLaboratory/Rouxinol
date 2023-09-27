#include <iostream>

using namespace std;
using llong = long long;

llong weights[100000];
llong N,K;

llong used_num(llong P){
  llong num = 0;
  llong track=0;
  llong i=0;
  for(llong j=0;j<K;++j){
    while(track+weights[i]<=P){
      track += weights[i];
      i++;
      if(i==N) return N;
    }
    track = 0;
  }
  return i;
}

int main(){
  cin >> N >> K;
  for(llong i=0;i<N;++i){
    cin >> weights[i];
  }
  llong Pl=0,Pr=1000000000;
  llong P;
  while(Pl+1<Pr){
    P = (Pl+Pr)/2;
    if(used_num(P)>=N)
      Pr = P;
    else
      Pl = P;
  }

  cout << Pr << endl;
  return 0;
}