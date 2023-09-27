#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  while(n!=0 || k!=0){

    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin >> a.at(i);
    }

    vector<int> s(n);
    s.at(0) = 0;
    for(int i=1;i<n;i++){
      s.at(i) = s.at(i-1)+a.at(i-1);
    }

    int ans=0;
    for(int i=0;i<n-k;i++){
      ans = max(s.at(i+k)-s.at(i),ans);
    }

    cout << ans << endl;

    cin >> n >> k;
  }
}

