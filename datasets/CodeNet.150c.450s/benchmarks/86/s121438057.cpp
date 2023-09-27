#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m,p;
  while(cin >>n>>m>>p,n||m||p){
    int all = 0;
    vector<int> card;
    for(int i=0,a; i<n; i++){
      cin >>a;
      all+=a;
      card.push_back(a);
    }
    all = all*(100-p);
    if(card[m-1] == 0) cout <<"0"<<endl;
    else cout <<all/card[m-1]<<endl;
  }
  return 0;
}