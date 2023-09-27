#include<iostream>
using namespace std;
int main(){
  while(1){
    int a,c,b,n,x,y[100];
    cin>>n>>a>>b>>c>>x;
    if(n+a+b+c+x==0)break;
    for(int i=0;i<n;i++){
      cin>>y[i];
    }
    int cnt=0,count=0;
    while(1){
	if(x==y[cnt]){
	  cnt++;
	}
      if(cnt==n){
	cout<<count<<endl;
	break;
      }
      if(count==10000){
	cout<<-1<<endl;
	break;
      }
      x=(a*x+b)%c;
      count++;
    }    
  }
  return 0;
}