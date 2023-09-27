#include<bits/stdc++.h>
using namespace std;
int A[251];
int main(){
  int H;

  cin>>H;
  for(int i=1;i<=H;i++) cin>>A[i];
  

  for(int i=1;i<=H;i++){
    cout<<"node "<<i<<": key = "<<A[i]<<", ";
    if(i!=1) cout<<"parent key = "<<A[i/2]<<", ";
    if(i*2<=H) cout<<"left key = "<<A[i*2]<<", ";
    if(i*2+1<=H) cout<<"right key = "<<A[i*2+1]<<", ";
    cout<<endl;
  }

  return 0;
}
			
