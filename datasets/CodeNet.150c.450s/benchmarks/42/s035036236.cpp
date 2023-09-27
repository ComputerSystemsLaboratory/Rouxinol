#include <queue>
#include <iostream>
#include <string>
#include <utility>
using namespace std;

int N, Q;
queue< pair<string, int> > U; //queue of <name, time>

int main() {
  cin >> N >> Q; // read n: number of processes, q:quantum

  string label;
  int t; // name and time
  for (int n=0; n<N; ++n) {    
    cin >> label >> t; // read label (p1, p2, ...) and time
    U.push( pair<string, int>(label, t) );
  }

  int S = 0; // Track the time taken
  int H; // holder variable
  
  while (! U.empty() ) {
    H = U.front().second;
    if (H <= Q) {
      S += H;
      cout << U.front().first << " " << S << endl;
      U.pop();
    }
    else {
      U.push( pair<string, int> (U.front().first, H - Q));
      U.pop();
      S += Q;
    }
  }
}
  