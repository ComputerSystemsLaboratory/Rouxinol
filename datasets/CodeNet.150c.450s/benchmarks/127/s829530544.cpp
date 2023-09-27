#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <unordered_set>



using namespace std; 
#define ll long long

int main(){
  ll n;
  cin >> n;
  
  for(ll i = 0; i < n; i++){
    string s;
    cin >> s;
    ll m = s.length();
    unordered_set<string> us;
    us.insert(s);
    for(ll t = 0; t < m; t++){
      string s1 = s.substr(0,t);
      string s2 = s.substr(t);
      string s1r = s1;
      string s2r = s2;
      //      cout << s1 << ' ' << s2 << ' ' << s1r << ' ' << s2r << endl;
	 
      reverse(s1.begin(),s1.end());
      reverse(s2.begin(),s2.end());
      us.insert(s1 + s2);
      us.insert(s1 + s2r);
      us.insert(s1r + s2);
      us.insert(s1r + s2r);
      us.insert(s2 + s1);
      us.insert(s2 + s1r);
      us.insert(s2r + s1);
      us.insert(s2r + s1r);
    }
    cout << us.size() << endl;

  }
}