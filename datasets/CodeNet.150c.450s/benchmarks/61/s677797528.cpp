#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,A,B,C,X,ans=0;
 

  while(1){
    cin>>N>>A>>B>>C>>X;
    if((N+A+B+C+X)==0)break;
    ans=0;
    vector<int> Y(N,0);
    for(int i=0;i<N;i++) cin>>Y[i];
    int i=0;
    while(1){
      bool flag=0;
      
      if(Y[i]==X) i++;
      if(i==N)flag=1;
	
      if(flag==1||ans>10000)break;
      ans++;
      X=(A*X+B)%C;
    }
    if(ans<=10000)cout<<ans<<endl;
    else cout<<"-1"<<endl;
  }
  
  return 0;
}