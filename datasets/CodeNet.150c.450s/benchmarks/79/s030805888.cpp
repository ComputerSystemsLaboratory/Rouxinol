#include <iostream>
#include <cassert>
#include <deque>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 50
using namespace std;
int ans;
int n,r,c,p;
deque<int> deck;
int main() {
  while(1){
    cin >> n >> r;
    if(n==0&&r==0) return 0;
    deck.clear();
    rep(i,n) deck.push_front(i+1);
    rep(i,r){
      cin >> p >> c;
      rep(j,c){
        deck.push_front(deck[p-1+c-1]);
        deck.erase(deck.begin()+p-1+c);
      }
    }
    ans = deck[0];
    cout << ans << endl;
  }
  return 0;
}