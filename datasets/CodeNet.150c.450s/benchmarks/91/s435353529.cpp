#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
  int a[1000000];
  int N=1000000;
  for(int i=0 ; i<N;i++)
    a[i]=1;

  for(int i=2; i<sqrt(N);i++){
    if(a[i]){
      for(int j=0 ; i*(j+2)<N;j++){
          a[i*(j+2)]=0;
      }
    }
  }
  int n;
  while(cin >>n){
  int sum=0;
  for(int i=2;i<=n;i++)
        sum+=a[i];
        cout << sum<<endl;
  }
}

