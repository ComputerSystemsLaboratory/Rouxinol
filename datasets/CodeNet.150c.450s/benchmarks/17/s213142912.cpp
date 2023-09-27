#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {

  int input;

  vector<int> ans;

  for ( int i = 0; i < 5; i++ ) {

    cin >> input;
    ans.push_back(input);

  }

  sort( ans.begin(), ans.end(), greater<int>() );

  for ( int i = 0; i < 5; i++ ) {
    if ( i != 0 ) cout << " ";
    cout << ans[i];
  }

  cout << endl;

  return 0;

}