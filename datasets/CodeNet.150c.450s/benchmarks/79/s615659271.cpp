#include<iostream>
using namespace std;

int main(){
  
  int n, r, p, c;
  int card[60], tmp[60];

  while(cin>>n>>r, n){
    for(int i=0;i<n;i++) card[i]=n-i;
    for(int i=0;i<r;i++){
      cin>>p>>c;
      for(int j=0;j<c;j++) tmp[j]=card[p-1+j];
      for(int j=0;j<p;j++) card[p-1+c-j-1]=card[p-1-j-1];
      for(int j=0;j<c;j++) card[j]=tmp[j];
    }
    cout<<card[0]<<endl;
  }
  
  return 0;
}