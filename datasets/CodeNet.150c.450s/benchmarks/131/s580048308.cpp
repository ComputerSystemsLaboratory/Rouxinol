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

int calc(string s,int l){
  int res=0;
  for(int i=0;i<l;i++) res=res*10+(s[i]-48);
  return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

int l;string a;
  while(true){
    cin >> a >> l;
    while((int)a.length()<l) a = "0"+a;
    if(l==0) break;
    int log[1000001];for(int i=0;i<1000001;i++)log[i]=-1;
    log[calc(a,l)]=0;
    for(int i=1;i<21;i++){
      std::vector<char> vmax,vmin;
      for(int i=0;i<l;i++){
        vmax.push_back(a[i]);
        vmin.push_back(a[i]);
      }
      sort(vmin.begin(),vmin.end());
      sort(vmax.begin(),vmax.end(),greater<char>());
      string ma="",mi="";
      for(int i=0;i<l;i++){
        mi+=vmin[i];
        ma+=vmax[i];
      }
      int ans=calc(ma,l)-calc(mi,l);
      if(log[ans]<0) log[ans]=i;
      else{
        cout << log[ans] <<" " << ans << " " << i-log[ans]<< endl;
        break;
      }
      a=to_string(ans);
      while((int)a.length()<l) a = "0"+a;
    }
  }
}