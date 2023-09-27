#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n,m,a,tt,th,sa,flag;
  vector<int> t;
  vector<int> h;
  while(1){
    //skk
    tt=0;
    th=0;
    t.clear();
    h.clear();
      
    flag=0;
    //in
    cin >> n >> m;
    if(n==0&&m==0)break;
    for(int i=0;i<n;i++){
      cin >> a;
      t.push_back(a);
      tt+=a;
    }
    for(int i=0;i<m;i++){
      cin >> a;
      h.push_back(a);
      th+=a;
    }
    if((tt+th)%2!=0){
      cout << -1 << endl;
      continue;
    }
    sort(t.begin(),t.end());
    sa=th-tt;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(t[i]+sa/2==h[j]){
	  cout << t[i] << " " << h[j] << endl;
	  flag=1;
	  break;
	}
      }
      if(flag==1)break;
    }
    if(flag==0)cout << -1 << endl;
  }
  return 0;
}