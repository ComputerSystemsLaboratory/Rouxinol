#include<iostream>

#include<string>

#include<cmath>

using namespace std;

int main(){

  int n;

  while(cin>>n){

    if(n==0)break;

    int ans=0;

    for(int i=1;i<=n/2+1;i++){

      for(int j=1;j<=n/2+1;j++){

    int a=i*(j+1)+j*(j+1)/2;

    if(a<n)  continue;

    else if(a==n){

      ans++;

    }else if(a>n){

      break;

    }      

      }  

    }

    cout<<ans<<endl;

  }

  return 0;

}