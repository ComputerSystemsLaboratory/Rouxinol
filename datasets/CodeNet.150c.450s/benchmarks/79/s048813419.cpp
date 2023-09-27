#include <iostream>
using namespace std;
void getcard(int *card, int n);
void shuffle(int *card, int p, int c);
int main(){
  int n,r;
  while (cin>>n>>r,n|r!=0){
    int card[n+1];
    getcard(card,n);
    for (int i=0;i<r;i++){
      int p,c;
      cin>>p>>c;
      shuffle(card,p,c);
    }
    cout<<card[1]<<endl;
  }
}
void getcard(int *card, int n){
  for (int i=1;i<=n;i++){
    card[i]=n+1-i;
  }
}
void shuffle(int *card, int p, int c){
  int temp[p-1];
  for (int i=0;i<p-1;i++){
    temp[i]=card[i+1];
  }
  for (int i=p;i<p+c;i++){
    card[i-p+1]=card[i];
  }
  for (int i=c+1;i<=c+p-1;i++){
    card[i]=temp[i-c-1];
  }
}