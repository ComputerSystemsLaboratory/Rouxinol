#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n;

  while(cin>>n,n!=0){
    int sa=0,sb=0,a,b;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      if(a==b){
	sa+=a;
	sb+=b;
      } else if(a>b){
	sa+=a+b;
      } else {
	sb+=a+b;
      }
    }

    cout<<sa<<" "<<sb<<endl;
  }

}