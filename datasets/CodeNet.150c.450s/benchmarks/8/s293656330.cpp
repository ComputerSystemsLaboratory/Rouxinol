#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {


  int n;
  cin >> n;

  int t = 0;
  int h = 0;
  for(int i=0; i<n; i++){
    vector<string> s(2);
    cin >> s[0] >> s[1];

    string tmp = s[0];
    sort(s.begin(), s.end());
    if( s[0] == s[1] ){
      t++;
      h++;
    }else if( tmp == s[0] ) h += 3;
    else t += 3;
  }
  cout << t << " " << h << endl;

  return 0;
}