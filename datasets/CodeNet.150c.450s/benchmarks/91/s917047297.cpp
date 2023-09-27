#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,count=0;
  while(scanf("%d",&n)!=EOF){
    int data[n+1];
    for(int i=2;i<=n;i++){
      data[i]=0;
    }
    for(int i=2;i<=n;i++){
      if(data[i]!=-1){
	count++;
	for(int j=i;j<=n;j+=i){
	  if(data[j]!=-1){
	  data[j]=-1;
	  }
	}
      }
    }
    cout << count << endl;
    count=0;
  }
  return(0);
}
  