#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)
#define all(c) (c).begin(), (c).end()
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main() {
  stack<int> sta;
  int n;
  while(cin >> n) {
    if(n != 0) sta.push(n);
    else {
      cout << sta.top() << endl;
      sta.pop();
    }
  }
}