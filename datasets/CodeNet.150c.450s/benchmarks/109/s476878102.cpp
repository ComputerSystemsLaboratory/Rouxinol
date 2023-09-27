#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct DATA{
  int time;
  int log;
};

int GetTime(const string);
int AtoiString(const string);
bool Compare(const DATA&, const DATA&);

int main(){
  int i, n, count, _count;
  string s, t;
  DATA _data;
  vector<DATA> data;

  while(1){
    cin >> n;
    if(n == 0) break;

    for(i=0; i<n; ++i){
      cin >> s >> t;
      _data.time = GetTime(s);
      _data.log = 1;
      data.push_back(_data);
      _data.time = GetTime(t);
      _data.log = -1;
      data.push_back(_data);
    }

    sort(data.begin(), data.end(), Compare);

    for(i=0, count=0, _count=0; i<data.size(); ++i){
      _count += data[i].log;
      if(count < _count) count = _count;
    }
    cout << count << endl;
    data.clear();
  }
  return 0;
}

int GetTime(const string str){
  string s, t, u;
  copy(str.begin(), str.begin()+2, back_inserter(s));
  copy(str.begin()+3, str.begin()+5, back_inserter(t));
  copy(str.begin()+6, str.end(), back_inserter(u));
  return AtoiString(s) * 3600 + AtoiString(t) * 60 + AtoiString(u);
}

int AtoiString(const string s){
  int i, x, d;
  for(i=s.size()-1, x=0, d=1; i>=0; --i, d*=10)
    x += ((s[i] - 48) * d);
  return x;
}

bool Compare(const DATA& x, const DATA& y){
  if(x.time == y.time)
    return x.log < y.log; 
  else
    return x.time < y.time;
}