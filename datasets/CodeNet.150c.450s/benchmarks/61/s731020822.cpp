#include<iostream>
using namespace std;

int main(){
  int n,a,b,c,x,y[100];
  while(1){
    int count=0;
    cin>>n>>a>>b>>c>>x;
    if((n+a+b+c+x)==0)break;
    for(int i=0;i<n;i++)
      cin>>y[i];
    int j=0;    
    while(1){
      if(y[j]==x)j++;
      if(n==j)break;
      else{
	x=(a*x+b)%c;
	count++;
      }
      if(count>10000)break;
    }
    if(count<=10000)
      cout<<count<<endl;
    else
      cout<<"-1"<<endl;
  }
  return 0;
}