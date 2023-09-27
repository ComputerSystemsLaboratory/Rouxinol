#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<iomanip>
#define pi 3.14159265358979323846
#define ll long long
#define elif else if
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;
int main(){
  int n;
  cin >> n;
  int ac = 0, wa = 0, tle = 0, re = 0;
  vector<string> v(n);
  rep(i, 0, n){
    cin >> v[i];
    if(v[i] == "AC"){
      ac++;
    }
    elif(v[i] == "WA"){
      wa++;
    }
    elif(v[i] == "TLE"){
      tle++;
    }
    elif(v[i] == "RE"){
      re++;
    }
  }
  cout << "AC x " << ac << "\n" << "WA x " << wa << "\n" << "TLE x " << tle << "\n" << "RE x " << re << "\n";
}
