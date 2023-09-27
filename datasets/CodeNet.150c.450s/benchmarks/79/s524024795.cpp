#include<iostream>
#include<vector>
using namespace std;

vector<int> deck;

void swap(int n,int p,int c){
  int tmp[p-1];
  for(int i=0;i<p-1;i++)
    tmp[i]=deck[n-1-i];
  for(int i=0;i<c;i++){
    deck[n-1-i]=deck[n-p-i];
  }
  for(int i=0;i<p-1;i++)
    deck[n-1-c-i]=tmp[i];

}

int main(){
  int n,r,c,p;
  while(cin>>n>>r,n){
      deck.clear();
    for(int i=0;i<n;i++)
      deck.push_back(i+1);
    for(int i=0;i<r;i++){
      cin>>p>>c;
      swap(n,p,c);
    }
    // for(int i=0;i<deck.size();i++)
    //cout<<deck[deck.size() - 1 - i]<<endl;
    //cout<<endl;
    cout<<deck[deck.size()-1]<<endl;
  }
  return 0;
}