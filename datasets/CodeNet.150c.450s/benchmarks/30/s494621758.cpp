#include <iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,minj,N[100],swapnumber=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>N[i];
  for(int i=0;i<n;i++){
    minj=i;
    for(int j=i;j<n;j++)if(N[j]<N[minj])minj=j;
    if(N[i]>N[minj]){
      swap(N[i],N[minj]);
      swapnumber++;
    }
  }
  for(int i=0;i<n;i++){
    if(i!=n-1)cout<<N[i]<<" ";
    else cout<<N[i]<<endl;
  }
  cout<<swapnumber<<endl;
return 0;
}