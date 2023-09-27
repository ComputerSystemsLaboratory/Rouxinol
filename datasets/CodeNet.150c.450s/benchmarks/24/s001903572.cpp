#include<iostream>
#include<map>

using namespace std;

int main() {
  int n, m;
  while(cin>>n>>m &&!(n==0 && m==0)) {
    map<int, int, greater<int> > myMap;
    for(int i=0; i<n; i++) {
      int d, p;
      cin>>d>>p;
      map<int, int>::iterator tmpItr;
      tmpItr = myMap.find(p);
      if(tmpItr == myMap.end()) {
        myMap.insert(make_pair(p, d)); // 期待値順にソート
      }
      else {
	myMap[tmpItr->first] += d;
      }
    }
    //cout<<myMap.size()<<endl;
    
    /*
    map<int, int>::iterator tmpItr = myMap.begin();
    for(; tmpItr!=myMap.end(); tmpItr++) {
      cout<<tmpItr->first<<" "<<tmpItr->second<<endl;
    }
    */
    
    for(int i=m; 0<i && !myMap.empty(); i--) {
      map<int, int>::iterator itr = myMap.begin();
      myMap[itr->first]--;
      if(myMap[itr->first] == 0) {
	myMap.erase(itr->first);
      }
    }
    
    int ans = 0;
    map<int, int>::iterator itr = myMap.begin();
    while(itr != myMap.end()) {
      ans += itr->first*itr->second;
      itr++;
    }
    cout<<ans<<endl;
  }
}