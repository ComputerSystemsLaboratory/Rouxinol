#include <bits/stdc++.h>
using namespace std;
int a[100];
int L;

int check(int until){
  for(int i=0; i < until; i++){
    if(a[until] == a[i]){
      return i;
    }
  }
  return -1;
}

string i2s(int a){
  stringstream ss;
  ss << a;
  return ss.str();
}

int getMax(string str){
  vector<char> v;
  string res;
  for(int i=0; i < str.length(); i++){
    v.push_back(str[i]);
  }
  for(int i=0; i < str.length(); i++){
    vector<char>::iterator it = max_element(v.begin(), v.end());
    res.insert(res.end(), 1, *it);
    *it = '0'-2;
  }
  return atoi(res.c_str());
}
int getMin(string str){
  vector<char> v;
  string res;
  for(int i=0; i < str.length(); i++){
    v.push_back(str[i]);
  }
  for(int i=0; i < str.length(); i++){
    vector<char>::iterator it = min_element(v.begin(), v.end());
    res.insert(res.end(), 1, *it);
    *it = '9'+2;
  }
  return atoi(res.c_str());
}

int main(void){
  while(cin >> a[0] >> L, a[0] | L){
    for(int i=1;; i++){
      string str;
      str = i2s(a[i-1]);
      str.insert(0, L-str.length(), '0');
      a[i] = getMax(str) - getMin(str);
      int ans = check(i);
      if(ans != -1){
        cout << ans << " "<< a[i] << " "<< i - ans << endl;
        break;
      }
    }
  }

  return 0;
}