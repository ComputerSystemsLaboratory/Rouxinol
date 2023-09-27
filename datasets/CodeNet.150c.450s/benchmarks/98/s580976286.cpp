#include <bits/stdc++.h>
using namespace std;
vector<int> s1;
vector<int> s2;

bool isSumSame(){
  int t_sum = 0, h_sum = 0;
  for(int i=0; i < s1.size(); i++){
    t_sum += s1[i];
  }
  for(int i=0; i < s2.size(); i++){
    h_sum += s2[i];
  }
  return t_sum == h_sum;
}

int main(void){
  int n, m;
  while(cin >> n >> m, n | m){
    int card_sum = 1e5;
    int t2h, h2t;
    s1.clear(); s2.clear();
    
    for(int i=0; i < n; i++){
      int tmp; cin >> tmp;
      s1.push_back(tmp);
    }
    for(int i=0; i < m; i++){
      int tmp; cin >> tmp;
      s2.push_back(tmp);
    }
    
    for(int i=0; i < n; i++){
      for(int j=0; j < m; j++){
	int tmp;
	tmp = s1[i];
	s1[i] = s2[j];
	s2[j] = tmp;
	if(isSumSame()){
	  if(card_sum > s1[i] + s2[j]){
	    t2h = s2[j]; h2t = s1[i];
	    card_sum = s1[i] + s2[j];
	  }
	}
	tmp = s1[i];
	s1[i] = s2[j];
	s2[j] = tmp;
      }
    }
    
    if(card_sum == 1e5) cout << -1 << endl;
    else                cout << t2h  << " " << h2t << endl;
  }
  return 0;
}