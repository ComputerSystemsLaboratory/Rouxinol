#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
  int n,m;
  int d,p;
  pair<int,int> v[10010];

  while(cin >> n >> m, n||m){
    for(int i=0;i<n;i++){
      cin >> d >> p;
      v[i] = make_pair(p,d);
    }
    sort(v,v+n);

    int cnt = n-1;
    while(0<=cnt && m){
      if(v[cnt].second>m){
	v[cnt].second -= m;
	m = 0;
      }else{
	m -= v[cnt].second;
	v[cnt].second = 0;
      }
      cnt--;
    }

    int ans = 0;
    for(int i=0;i<n;i++)ans += v[i].first * v[i].second;
    cout << ans << endl;
  }
}