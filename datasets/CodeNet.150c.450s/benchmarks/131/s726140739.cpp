#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
vector<string> tmp;
int ans,cnt,n;
string s;
string rec(string x){
  while(1){
    //cout << x << endl;
    bool flag=false;
    sort(x.begin(),x.end());
    string a = x;
    if(a.empty()==1) while(a.front()!='0') a.erase(a.begin());
    int mn = atoi(a.c_str());
    reverse(x.begin(),x.end());
    int mx = atoi(x.c_str());
    x = to_string(mx-mn);
    if(x.size()!=n) x = '0'+x;
    //cout << mx << " " <<  mx << " " << x << endl;
    for(int i=0; i<tmp.size(); i++){
      //cout << tmp[i] << " ";
      if(x == tmp[i]){
        ans = i;
        flag = true;
	      break;
      }
    }
    tmp.push_back(x);
    cnt++;
    if(flag == false) return rec(x);
    else return x;
    }
  return 0;
}
int main(){
  while(1){
    cin >> s >> n;
    if(s == "0" && n == 0) break;
    cnt = 0;
    ans = 0;
    while(s.size() != n) s = '0'+s;
    tmp.push_back(s);
    s = rec(s);
    cout << ans << " "<< atoi(s.c_str()) << " " << cnt-ans << endl;
    tmp.clear();
  }
  return 0;
}

