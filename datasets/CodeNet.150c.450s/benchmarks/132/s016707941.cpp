#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n,p;
  while(true){
    cin >> n >> p;
    if(n==0 && p==0) break;
    int stone=p;
    int kouho[n];
    for(int i=0;i<n;i++) kouho[i]=0;
    int pos=0;
    while(true){
      if(stone>0){
        stone--;
        kouho[pos]+=1;
        if(stone==0 && kouho[pos]==p) break;
      }
      else if(stone==0){
        stone+=kouho[pos];
        kouho[pos]=0;
      }
      pos++;
      pos %= n;
    }
    cout << pos << endl;
  }
}