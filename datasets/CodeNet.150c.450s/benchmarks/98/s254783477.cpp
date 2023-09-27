#include <bits/stdc++.h>
using namespace std;

int n,m,tsum,hsum,minn,at,ah;
vector<int> ta,ha;

int main(){
  int i,j,k;
  while(1){
    cin >> n >> m;
    if(n+m==0)break;
    tsum=0;
    hsum=0;
    minn=9999999;
    at = -1;
    ah = -1;
    for(i=0;i<n;i++){
      cin >> j;
      ta.push_back(j);
      tsum+=j;
    }
    for(i=0;i<m;i++){
      cin >> j;
      ha.push_back(j);
      hsum+=j;
    }
    if(abs(hsum-tsum)%2==0){
      for(i=0;i<n;i++)for(j=0;j<m;j++){
	  if((tsum-hsum)/2==(ta[i]-ha[j])&&minn>abs(ta[i]-ha[j])){
	    at = ta[i];
	    ah = ha[j];
	    minn = abs(at-ah);
	  }
	}
    }
    //cout << "ans ";
    if(at+ah!=-2)cout << at << " "<<ah <<endl;
    else cout << -1 << endl;
    while(ha.size())ha.pop_back();
    while(ta.size())ta.pop_back();
  }
  return 0;
}

