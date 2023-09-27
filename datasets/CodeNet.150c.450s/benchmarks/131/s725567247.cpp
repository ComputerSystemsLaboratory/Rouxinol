#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  int l;
  while(cin >> a >> l && (a!="0" || l)){
    vector<pair<int,int> > uni;
    int ans=-1;
    uni.push_back(make_pair(stoi(a),0));
    int b,c,i;
    for(i=1;uni.size()==i;++i){
      while(a.length()!=l) a='0'+a;
      sort(a.begin(),a.end());
      b=stoi(a);
      reverse(a.begin(),a.end());
      c=stoi(a);
      a=to_string(c-b);
      for(int j=0;j<uni.size();++j)
	if(c-b==uni[j].first) ans=j;
      if(ans!=-1) break;
      uni.push_back(make_pair(c-b,i));
    }
    cout << ans << " " << a << " " << i-ans << endl;
  }
  
  return 0;
}

