#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, p;
  vector<int> s, t;

  cin >> n;

  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    s.push_back(a);
  }
  sort(s.begin(),s.end());
  s.erase(unique(s.begin(), s.end()), s.end()); 
  cin >> p;

  for(int i = 0; i < p; i++){
    int a;
    cin >> a;
    t.push_back(a);
  }

  int cnt = 0;

  for(int i = 0; i < (int)s.size(); i++){
    for(int j = 0; j < (int)t.size(); j++){
      if(s[i] == t[j]){
	cnt++;
	//	cout << s[i] << " " << t[j] << endl;
      }
    }
  }

  cout << cnt << endl;

}