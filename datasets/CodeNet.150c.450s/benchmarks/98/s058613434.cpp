#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n, m;

  while(cin>>n>>m && n>0) {
    int taroPts = 0, hanakoPts = 0;
    vector<int> taroSet, hanakoSet;
    for(int i=0; i<n; i++) {
      int tmp;
      cin>>tmp;
      taroPts += tmp;
      taroSet.push_back(tmp);
    }
    for(int i=0; i<m; i++) {
      int tmp;
      cin>>tmp;
      hanakoPts += tmp;
      hanakoSet.push_back(tmp);
    }

    int t2h, h2t, sumPts = 1000;
    for(int i=0; i<taroSet.size(); i++) {
      for(int j=0; j<hanakoSet.size(); j++) {
        if(taroPts-taroSet[i]+hanakoSet[j] == hanakoPts-hanakoSet[j]+taroSet[i] && taroSet[i]+hanakoSet[j]<sumPts) {
	  t2h = taroSet[i];
	  h2t = hanakoSet[j];
	  sumPts = t2h+h2t;
        }
      }
    }
    if(sumPts != 1000) {
      cout<<t2h<<" "<<h2t<<endl;
    }
    else {
      cout<<"-1"<<endl;
    }
  }
}