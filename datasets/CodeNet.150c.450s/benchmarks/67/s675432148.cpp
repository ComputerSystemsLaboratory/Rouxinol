#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int n,s;
  while(cin>>n&&n){
    s=0;
    for(i=2;i<50;i++){
      for(j=1;;j++){
	if((2*j+i-1)*i/2==n){
	  s++;
	  break;
	}else if((2*j+i-1)*i/2>n)
	  break;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}