#include <iostream>
#include <vector>
#include <utility>
#include <stack>
using namespace std;
int main() {
  stack<int> s1;
  stack< pair<int,int> > s2;
  char c;
  int d;
  int sum = 0;
  for(int i =0; cin >>c ; i++ ){
    if(c == '\\'){
      s1.push(i);
    }
    else if(c == '/' && s1.size()>0) {
      int j = s1.top();
      d = i-j;
      sum +=d;
      s1.pop();
      while(s2.size()>0 && s2.top().first > j){
          d += s2.top().second;
          s2.pop();
      }
      s2.push(make_pair(j,d));
    }
  }
  int n = s2.size();
  vector <int> pond(n);
  for(int i = 0; i<n; i++){
    pond[n-i-1] = s2.top().second;
    s2.pop();
  }
  cout << sum << endl;
  cout << n ;
  for(int i = 0; i<n; i++){
    cout << ' ' <<pond[i];
  }
  cout << endl;

  return 0;
}