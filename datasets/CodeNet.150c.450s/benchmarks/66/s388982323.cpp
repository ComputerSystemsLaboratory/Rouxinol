#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

#define loop(lp) for(int lp2 = 0; lp2 < lp; lp2 ++)
#define ascent(i, a, b) for(int i = a; i < b; i ++)

#define pb push_back

using namespace std;

int main() {
  int N, M;
  map<int, string> sysID;

  cin >> N;
  ascent(i, 0, N) {
    string tmp;
    cin >> tmp;
    sysID.insert(make_pair(i, tmp));
  }

  cin >> M;
  bool door = false; //if the door opened, then "true"
  ascent(i, 0, M) {
    string card;
    cin >> card;
    //   cout << "  " << card << endl;

    ascent(j, 0, N) {
      //cout << "   " << sysID[j] << endl;
      if(sysID[j] == card) {
	if(door) {
	  cout << "Closed by " << card << endl;
	}
	else {
	  cout << "Opened by " << card << endl;
	}

	door = !door;
	break;
      }

      if(j == N-1) {
	cout << "Unknown " << card << endl;
      }
    }
  }

  return 0;
}