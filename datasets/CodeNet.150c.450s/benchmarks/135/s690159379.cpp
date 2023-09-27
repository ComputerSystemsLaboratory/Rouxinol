#include<iostream>
#include<vector>
#include<algorithm>
#define all(a) (a).begin(),(a).end()
using namespace std;

int n,m,h[2000],w[2000];

int main(){
  while(cin >> n >> m,n){
    vector<int> sumh,sumw;
    for(int i=0;i<n;i++)cin >> h[i];
    for(int i=0;i<n;i++){
      int sum = 0;
      for(int j=i;j<n;j++){
	sum += h[j];
	sumh.push_back(sum);
      }
    }

    for(int i=0;i<m;i++)cin >> w[i];
    for(int i=0;i<m;i++){
      int sum = 0;
      for(int j=i;j<m;j++){
	sum += w[j];
	sumw.push_back(sum);
      }
    }

    sort(all(sumh)); sort(all(sumw));

    int ans = 0;
    for(int i=0;i<sumh.size();i++){
      ans += upper_bound(all(sumw),sumh[i]) - lower_bound(all(sumw),sumh[i]);
    }
    cout << ans << endl;
  }
}


	