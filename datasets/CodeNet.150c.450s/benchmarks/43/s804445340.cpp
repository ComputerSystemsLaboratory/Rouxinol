#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  int a_score;
  int b_score;
  while(true) {
    a_score = 0;
    b_score = 0;
    cin >> n;
    if(n == 0) break;
    for(int i=0;i<n;i++) {
      int a_card,b_card;
      cin >> a_card >> b_card;
      if( a_card > b_card ) {
        a_score += a_card + b_card;
      }
      else if( b_card > a_card) {
        b_score += a_card + b_card;
      }
      else {
        // if a_card == b_card
        a_score += a_card;
        b_score += b_card;
      }
    } // end for
    cout << a_score << " " << b_score << "\n";
  } // end while
}