#include <iostream>
using namespace std;

int main(){
  int n,N[200],flag,temp,swap=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>N[i];
  flag=1;
  while(flag){
    flag=0;
    for(int j=n-1;j>0;j--){
      if(N[j]<N[j-1]){
        temp=N[j];
        N[j]=N[j-1];
        N[j-1]=temp;
        flag=1;
        swap++;
      }
    }
  }
  for(int i=0;i<n;i++){
    if(i!=n-1)cout<<N[i]<<" ";
    else cout<<N[i]<<endl;
  }
  cout<<swap<<endl;
return 0;
}