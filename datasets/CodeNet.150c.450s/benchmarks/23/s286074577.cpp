#include<iostream>
#include<cstdio>

using namespace std;

int main(){
  int n;
  int fibn[1000];
  for(int i=0;i<1000;i++)fibn[i]=-1;
  fibn[0]=fibn[1]=1;
  scanf("%d",&n);
  for(int i=2;i<=n;i++){
    fibn[i]=fibn[i-1]+fibn[i-2];
  }
  cout << fibn[n] << endl;
  return 0;
}