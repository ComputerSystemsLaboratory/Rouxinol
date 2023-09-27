#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;++i)
using namespace std;

struct Card{
  char suit;
  int value;
};

void BubbleSort(Card c[],int n){
  rep(i,0,n){
    for(int j=n-1;j>i;--j){
      if(c[j].value<c[j-1].value) swap(c[j],c[j-1]);
    }
  }
}
void SelectionSort(Card c[],int n){
  rep(i,0,n){
    int min=i;
    rep(j,i,n)
      if(c[min].value>c[j].value) min=j;
    if(min!=i) swap(c[min],c[i]);
  }
}
void print(Card c[],int n){
  rep(i,0,n) cout<<c[i].suit<<c[i].value<<(i==n-1?"\n":" ");
}
bool isStable(Card a[],Card b[],int n){
  rep(i,0,n) if(a[i].suit!=b[i].suit) return false;
  return true;
}
int main(){
  int n;
  Card a[37],b[37];
  cin>>n;
  rep(i,0,n){
    cin>>a[i].suit>>a[i].value;
    b[i].suit=a[i].suit;
    b[i].value=a[i].value;
  }
  BubbleSort(a,n);
  print(a,n);
  cout<<"Stable\n";
  SelectionSort(b,n);
  print(b,n);
  if(isStable(a,b,n)) cout<<"Stable\n";
  else cout<<"Not stable\n";
  return 0;
}