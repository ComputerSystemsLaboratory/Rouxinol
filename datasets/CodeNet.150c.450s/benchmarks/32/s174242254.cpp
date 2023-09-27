#include<bits/stdc++.h>
using namespace std;

int main(){

  int nmin,nmax,m;
  vector<int> point(0);
  int gap,ans;

  while(cin>>m>>nmin>>nmax , nmin&&nmax&&m){
    point.resize(m);
    gap = 0;
    
    for(int i=0; i<m; i++)cin >> point[i];

    sort(point.begin(),point.end());
    reverse(point.begin(),point.end());

    //for(int i=0;i<point.size();i++)cout << point[i]<<' ';
    
    for(int i=nmin-1; i<nmax; i++){
      if(point[i]-point[i+1] >= gap){
	gap = point[i]-point[i+1];
	ans = i+1;
      }
    }

    cout << ans << endl;

  }


  return 0;
}