#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;

  while(cin>>n){
    int cnt=0;

    for(int i=0;i<=9;++i){
      for(int j=0;j<=9;++j){
        for(int k=0;k<=9;++k){
          if(n-i-j-k<10&&n-i-j-k>=0) ++cnt;
        }
      }
    }

    cout<<cnt<<endl;
  }

  return EXIT_SUCCESS;
}