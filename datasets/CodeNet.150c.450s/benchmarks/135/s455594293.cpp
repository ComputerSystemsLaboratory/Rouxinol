#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  while(cin >> n >> m,n||m){
    vector<int> h;
    vector<int> w;
    vector<int> a(1500000,0);
    vector<int> o(1500000,0);
    int tmp;

    for(int i=0; i<n; ++i){
      cin >> tmp;
      h.push_back(tmp);
      int x=0;
      for(int j=i; j>=0; --j){
	x += h[j];
	++a[x-1];
      }
    }

    for(int i=0; i<m; ++i){
      cin >> tmp;
      w.push_back(tmp);
      int x=0;
      for(int j=i; j>=0; --j){
	x += w[j];
	++o[x-1];
      }
    }

    int mi = min(accumulate(h.begin(),h.end(),0),accumulate(w.begin(),w.end(),0));
    int ans = 0;
    for(int i=0; i<mi; ++i){
      ans += a[i] * o[i];
    }
    cout << ans << endl;
  }
  return 0;
}
      
      