#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int a[4],c[4];
  while(1){
    int e=0,b=0,k;
    for(int i=0;i<4;i++)
      k=scanf("%d",&a[i]);
    if(k==-1)break;
    for(int i=0;i<4;i++){
      cin >> c[i];
      for(int j=0;j<4;j++)
	if(c[i]==a[j]){
	  if(i==j)e++;
	  else b++;
	}
    }
    cout<<e<<' '<<b<<endl;
  }
  return 0;
}