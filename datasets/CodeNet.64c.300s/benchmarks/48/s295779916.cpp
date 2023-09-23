#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,prime[1000000]={0};
  int count=0;
  while(cin>>n/*入力（EOF）*/){
    for(int i=2/*0と１は素数ではないため２から始める。*/;i<=sqrt(n)/*ルートn*/;i++){
      for(int j=i*2/*i*2は必ず素数ではない*/;j<=n;j+=i/*j<=nまでi*aをする。*/){
	prime[j]=1;/*jは素数ではない。*/
      }
    }
    for(int i=2;i<=n;i++){
      if(prime[i]==0){/*もし素数だったら*/
	count++;
      }
    }
  cout<<count<<endl;
  count=0;
  }
  return 0;
}