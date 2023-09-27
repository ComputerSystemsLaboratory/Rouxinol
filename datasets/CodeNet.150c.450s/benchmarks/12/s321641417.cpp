#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,*b;
  cin>>a;
  b = (int *)malloc(sizeof(int)*(a+1));
 
  for(int i=1;i<=a;i++)
    cin>>b[i];
  
  for(int i=1;i<=a;i++){
    cout<<"node "<<i<<": key = "<<b[i]<<", ";
    if(i!=1) cout<<"parent key = "<<b[i/2]<<", ";
    if(i*2<=a) cout<<"left key = "<<b[i*2]<<", ";
    if((i*2+1)<=a) cout<<"right key = "<<b[i*2+1]<<", ";
    cout<<endl;
  }
  
  return 0;
}

