#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n, r;
  int card[50];

  while(cin>>n>>r, n){
    for(int i=0;i<n;i++) card[i]=n-i;
    for(int i=0;i<r;i++){
      int p, c;
      cin>>p>>c;

      rotate(card, card+p-1, card+p+c-1);
    }

    cout<<card[0]<<endl;
  }

  return 0;
}