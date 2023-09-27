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


int mean(vector<int> v) {
    int size = v.size();
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += v[i];
    }
    return sum / size;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  int ave;
  std::vector<int> v;
  while(cin >> n,n){
    for(int i=0;i<n;i++){
      int a;
      cin >> a;
      v.push_back(a);
    }
    sort(v.begin(),v.end());
    v.pop_back();
    v.erase(v.begin());
    ave = mean(v);
    cout << ave << endl;
    v.clear();
  }
}