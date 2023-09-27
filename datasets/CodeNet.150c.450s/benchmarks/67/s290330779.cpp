#include<iostream>

using namespace std;

int main(){

 int n;

 while(cin >> n,n){

  int a,b=0;

  for(int i=1;i<=n;i++){

    for(int t=2;t<=n;t++){

      a=i*t+(t*(t-1)/2);

      if(a==n){

    b=b+1;

      }

    }

    

  }

  cout << b<<endl;

 }

  return 0;

}