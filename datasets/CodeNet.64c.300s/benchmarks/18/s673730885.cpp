#include <iostream>
using namespace std;

int N[40];

int main(){
  while(1){
    int n;
    cin >> n;
    if(n==0) break;
    N[0]=1;
    N[1]=1;
    N[2]=2;
    for(int i=3;i<n+1;++i){
      N[i]=N[i-1]+N[i-2]+N[i-3];
    }
    cout <<1 + ( N[n] / 3650 ) << endl;
  }
}