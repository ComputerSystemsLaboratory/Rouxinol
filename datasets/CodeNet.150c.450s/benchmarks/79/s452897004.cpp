#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>card;

void cut(int p,int c){
  vector<int>res;
  for(int i=p;i<p+c;i++)res.push_back(card[i]);
  for(int i=0;i<p;i++)res.push_back(card[i]);
  for(int i=p+c;i<card.size();i++)res.push_back(card[i]);
  card=res;
}

int main(void){
  int n,r;

  while(cin >> n >> r, n|r){
    card.resize(n);
    for(int i=0;i<n;i++)card[i]=n-i;
    
    int p,c;
    for(int i=0;i<r;i++){
      cin >> p >> c;
      cut(p-1,c);
    }
    cout << card[0] << endl;
  }
  return 0;
}