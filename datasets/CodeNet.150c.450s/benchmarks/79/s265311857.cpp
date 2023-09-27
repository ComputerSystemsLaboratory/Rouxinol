#include <bits/stdc++.h>
using namespace std;

int main(){
  int n=1,r=1,p,c;
  vector<int> deck,temp,ans;

  while(1){
    cin >> n >> r;
    if(n==0&&r==0)break;
    for(int i=n; i>0; --i)deck.push_back(i); //???????????????
    for(int i=0; i<r; ++i){
      cin >> p >> c;
      copy(deck.begin()+p-1,deck.begin()+p+c-1,back_inserter(temp));
      deck.erase(deck.begin()+p-1,deck.begin()+p+c-1);
      copy(deck.begin(),deck.end(),back_inserter(temp));
      deck=temp;
      temp.clear();
    }
    ans.push_back(deck[0]);
    deck.clear();
  }
  for(auto x: ans)cout << x << endl;
  return 0;
}