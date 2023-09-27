#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iterator>
#include <numeric>
#include <functional>
#include <climits>



using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, char> pic;

void bubble(vector<pic>& v){
  size_t n = v.size();
  for (size_t i = 0; i < n; i++) {
    for (size_t j = n-1; j > i; j--) {
      if(v[j-1].first > v[j].first){
        pic buf = v[j-1];
        v[j-1] = v[j];
        v[j] = buf;
      }
    }
  }
}

void selection(vector<pic>& v){
  size_t n = v.size();
  for (size_t i = 0; i < n; i++) {
    size_t minj = i;
    for (size_t j = i; j < n; j++) {
      if(v[j].first < v[minj].first){
        minj = j;
      }
    }
    pic buf = v[minj];
    v[minj] = v[i];
    v[i] = buf;
  }
}

void print(vector<pic> v){
  for (size_t i = 0; i < v.size()-1; i++) {
    cout << v[i].second << v[i].first << " ";
  }
  cout << v.back().second << v.back().first << endl;
}


bool stable(vector<pic> in, vector<pic> out){
  size_t n = in.size();
  for (size_t i = 0; i < n; i++) {
    for (size_t j = i+1; j < n; j++) {
      if(in[i].first == in[j].first){
        size_t x = 0, y = 0;
        for(; x < n; x++){
          if(in[i] == out[x]) break;
        }
        for(; y < n; y++){
          if(in[j] == out[y]) break;
        }
        if((i<j) != (x<y)) return false;
      }
    }
  }
  return true;
}

void print2(vector<pic> in, vector<pic> v){
  if(stable(in, v)){
    cout << "Stable" <<endl;
  } else{
    cout << "Not stable" <<endl;
  }
}


int main(int argc, char *argv[]){
  size_t n;
  cin >> n;
  vector<pic> v(n);
  for (size_t i = 0; i < n; i++) {
    string buf;
    cin >> buf;
    v[i].first = buf[1]-'0';
    v[i].second = buf[0];
  }

  vector<pic> b = v;
  vector<pic> s = v;

  bubble(b);
  print(b);
  print2(v, b);

  selection(s);
  print(s);
  print2(v, s);

  return 0;
}