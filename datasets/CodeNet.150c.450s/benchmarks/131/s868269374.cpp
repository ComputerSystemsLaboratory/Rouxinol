#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

string ChangeFromIntToString(int, int);
int ChangeFromStringToInt(const string);

int main(){
  int i, j, x, l, max, min;
  vector<int> data;
  string s, maxs, mins;

  while(1){
    cin >> x >> l;
    if(x == 0 && l == 0) break;
    data.push_back(x);

    while(1){
      s = ChangeFromIntToString(x, l);
      maxs = s;
      mins = s;
      sort(maxs.begin(), maxs.end(), greater<int>());
      sort(mins.begin(), mins.end());
      max = ChangeFromStringToInt(maxs);
      min = ChangeFromStringToInt(mins);
      x = max - min;

      for(i=0, j=-1; i<data.size(); ++i){
	if(x == data[i]){
	  j = i;
	  break;
	}
      }
      if(j != -1) break;
      data.push_back(x);
    }

    cout << j << " " << data[j] << " " << data.size()-j << endl;
    data.clear();
  }
  return 0;
}

string ChangeFromIntToString(int x, int l){
  int i, d;
  char c;
  string s;
  for(i=1, d=1; i<l; ++i) d *= 10;
  for(i=d; i>=1; i/=10){
    c = x/i + 48;
    s.push_back(c);
    x %= i;
  }
  return s;
}

int ChangeFromStringToInt(const string s){
  int i, x, d;
  for(i=s.size()-1, x=0, d=1; i>=0; --i){
    x = x + (s[i] - 48) * d;
    d *= 10;
  }
  return x;
}