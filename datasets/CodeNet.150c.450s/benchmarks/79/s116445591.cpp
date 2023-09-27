#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 1 ; i <= n ; i++)

using namespace std;

int main()
{
  while(true){
    int n,r;
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    
    vector<int> card;
    rep(i, n){
      card.push_back(i);
    }
    int p,c;
    for( ; r > 0 ; r--){
      cin >> p >> c;

      p = n - p - c + 1;
      for( ; c > 0 ; c--){
	card.push_back(card[p]);
	card.erase(card.begin() + p);
      }
    }
    cout << card.back() << '\n';
  }
}