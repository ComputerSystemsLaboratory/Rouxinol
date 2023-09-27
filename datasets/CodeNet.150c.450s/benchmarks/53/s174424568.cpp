#include <iostream>
#include <cmath>
using namespace std;

const int MAX= 31700; //sqrt(1e9)
int sosu[MAX+1];
void Prime_Factor(){
  for(int i=2;i<=MAX;i++){
    if(!sosu[i]){
      for(int j=i*2;j<=MAX;j+=i){
        sosu[j]=1;
      }
    }
  }
}
void Prime_Factorization(int k){//kを素因数分解
    int pri_num=0;
    for(int i=2;i<=MAX;i++){
      while(!sosu[i] && k%i==0){
        cout<<" "<<i;
        k/=i;
        pri_num++;
      }
    }
    if(pri_num==0) cout<<" "<<k;
}
int main(){
  int n; cin>>n;
  cout<<n<<':';
  Prime_Factor();
  Prime_Factorization(n);
  cout<<"\n";
}

