#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n_max,n_min,m;
  while(cin >> m >> n_min >> n_max,m!=0){
    vector<int> v;
    int m_gyap=0;
    int ans;
    
    for(int i=0; i<m; ++i){
      int tmp;
      cin >> tmp;
      v.push_back(tmp);
    }

    for(int i=n_min-1; i<n_max; ++i){
      int tmp;
      tmp = v[i] - v[i+1];
      if(m_gyap <= tmp){
	m_gyap = tmp;
	ans = i+1;
	//cout << "gyap is " << v[i] << " to " << v[i+1] << endl;
      }
    }

    cout << ans << endl;
  }
  return 0;
}
    
