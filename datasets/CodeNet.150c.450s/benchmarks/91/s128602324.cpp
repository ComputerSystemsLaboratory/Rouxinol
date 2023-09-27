#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int n;
  int cont;
  while(scanf("%d",&n)!=EOF){
    int a[n];
    for(int i=0;i<n;i++){
      a[i]=1;        //1 素数　０素数ではない
    }
    a[0]=0;
    cont=0;
    for(int i=2;i<=sqrt(n);i++){
      if(a[i-1]==1){
	for(int j=2;i*j<=n;j++){
	  a[i*j-1]=0;
	}
      }
    }
    for(int i=0;i<n;i++){
      if(a[i]==1)cont++;
    }
    cout<<cont<<endl;
  }
}