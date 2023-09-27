#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<tuple>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int main(){
  int n;
  cin >> n;
  vector<string> vec(n);
  for (int i=0; i<n; i++){
    cin >> vec.at(i);
  }

  int c0=0, c1=0, c2=0, c3=0;
  for (int i=0; i<n; i++){
    if (vec.at(i)=="AC"){
      c0++;
    }
    else if (vec.at(i)=="WA"){
      c1++;
    }
    else if (vec.at(i)=="TLE"){
      c2++;
    }
    else {
      c3++;
    }
  }

  cout << "AC x " << c0 << endl;
  cout << "WA x " << c1 << endl;
  cout << "TLE x " << c2 << endl;
  cout << "RE x " << c3 << endl;
}
