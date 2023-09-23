#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <deque>
#include <vector>
#define MAX 10010
#define rep(i,p) for(int i=0;i<p;i++)
#define pb push_back
using namespace std;
int n,hoge,foo;
int graph[MAX][MAX] = {0};
int main(){
  cin >> n;
  rep(i,n) {
    cin >> hoge >> foo;
    rep(j,foo) {
      cin >> hoge;
      graph[i][hoge-1] = 1;
    }
  }
  rep(i,n) {
    cout << graph[i][0];
    for(int j=1;j<n;j++) cout << " " << graph[i][j];
    cout << endl;
  }
  return 0;
}