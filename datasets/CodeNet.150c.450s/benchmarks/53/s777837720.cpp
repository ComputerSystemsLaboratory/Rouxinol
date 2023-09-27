#include<bits/stdc++.h>
using namespace std;

vector <int> p(0);

void Prime(int n){

  bool flg[(int)sqrt( pow(10,9) ) +1];
  int indx=2;

  flg[0]=flg[1]=0;
  for(int i=0; i<sqrt(n)+1; i++)flg[i]=0;
  

  while(indx<=sqrt(n)){
    flg[indx]=1;
    p.push_back(indx);
    for(int i=2; i*indx<sqrt(n); i++){
      flg[indx]=1;
    }

    while(flg[indx]==1 && indx<=sqrt(n))indx++;

  }
  

}


int main(){

  int n;

  cin >> n;

  Prime(n);

  cout << n << ':';

  int i=0;
  while(n!=1 && i<(int)p.size()){
    
    while(n%p[i]==0){
      cout << ' ' << p[i];
      n /= p[i];
    }

    i++;
    
  }

  if(i==(int)p.size() && n!=1)cout << ' '<<n;
  cout << endl;

  return 0;
}