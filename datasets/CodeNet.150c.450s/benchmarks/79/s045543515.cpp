#include<iostream>
#include<vector>

using namespace std;

int main(){
  int n,r;

  while(cin>>n>>r,n){
    int p,c;
    vector<int> cards;
    
    for(int i=n;i>0;--i){
      cards.push_back(i);
    }
    
    for(int i=0;i<r;++i){
      cin>>p>>c;
      vector<int> temp;
      for(int j=0;j<c;++j){
	temp.push_back(cards[p-1]);
	cards.erase(cards.begin()+p-1);
      }
      
      int j=0;
      for(auto i:temp){
	cards.insert(cards.begin()+j,i);
	j++;
      }
    }
    cout<<cards[0]<<endl;
  }
}