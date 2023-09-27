//Square Route
#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  while(cin>>N>>M, !(N==0&&M==0)){
    vector<int> h, w;
    h.push_back(0); w.push_back(0);
    int mx=0;
    for(int i=0; i<N; i++){
      int tmp;
      cin>>tmp;
      h.push_back(tmp+mx);
      mx+=tmp;
    }
    mx=0;
    for(int i=0; i<M; i++){
      int tmp;
      cin>>tmp;
      w.push_back(tmp+mx);
      mx+=tmp;
    }
    sort(h.begin(), h.end());
    sort(w.begin(), w.end());
    vector<int> diff_h, diff_w;
    for(int i=0; i<h.size()-1; i++)
      for(int j=i+1; j<h.size(); j++)
	diff_h.push_back(h[j]-h[i]);
    for(int i=0; i<w.size()-1; i++)
      for(int j=i+1; j<w.size(); j++)
	diff_w.push_back(w[j]-w[i]);
    sort(diff_h.begin(), diff_h.end());
    sort(diff_w.begin(), diff_w.end());
    int ans=0;
    for(int i=0; i<diff_h.size(); i++)
      ans+=distance(lower_bound(diff_w.begin(), diff_w.end(), diff_h[i]), upper_bound(diff_w.begin(), diff_w.end(), diff_h[i]));
    cout<<ans<<endl;
  }
  return 0;
}