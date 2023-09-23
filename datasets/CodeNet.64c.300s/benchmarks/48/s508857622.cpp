#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  int num[1000000]={0};
  num[0]=1;
  num[1]=1;

  for(int i=2;i<1000000;i++){
    if(num[i]==0){
      for(int j=2;j*i<1000000;j++){
        num[j*i]=1;
      }
    }
  }

  while(scanf(" %d",&n)!=EOF){
    int cnt=0;
    for(int i=2;i<=n;i++){
      if(num[i]==0){
	cnt++;
      }
    }
    cout << cnt << endl;
  }

  return 0;
}