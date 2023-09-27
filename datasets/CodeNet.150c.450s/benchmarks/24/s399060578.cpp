//Princess's Marriage
#include<bits/stdc++.h>
using namespace std;

bool mysort(const pair<int, int> &s, const pair<int, int> &t){
  if(s.second!=t.second)return s.second > t.second;
  return s.first > t.first;
}

int main(){
  while(true){
    int N, M;
    cin>>N>>M;
    if(N==0&&M==0)break;
    vector<pair<int, int> > v;
    for(int i=0; i<N; i++){
      int D, P;
      cin>>D>>P;
      v.push_back(pair<int, int>(D, P));
    }
    sort(v.begin(), v.end(), mysort);
    int ans=0;
    for(int i=0; i<N; i++){
      if(M>=v[i].first){M-=v[i].first;}
      else{
        ans+=(v[i].first-M)*v[i].second;
        M=0;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}