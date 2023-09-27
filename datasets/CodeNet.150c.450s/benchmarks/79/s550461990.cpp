#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,r,p,c;
  int j;
  int card[50];
  while(1){
    cin>>n>>r;
    if(n==0 && r==0) break;
    j=1;
    for(int i=n-1;i>=0;i--){
      card[i]=j;
      j++;
    }
    for(int i=0;i<r;i++){
      cin>>p>>c;
      rotate(card,card+p-1,card+p+c-1);
   }
    cout<<card[0]<<endl;
  }
  return 0;
}

