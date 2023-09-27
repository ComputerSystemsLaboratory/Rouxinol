#include<bits/stdc++.h>
using namespace std;

int main(){

  bool c;
  int i,n,num;
  char d,d1,d2;
  map<char,char> mp;

  while(cin >> n,n){  

    for(i=0;i<n;i++){
      cin >> d1 >> d2;
      mp.insert(make_pair(d1,d2));
    }

    cin >> n;

    for(i=0;i<n;i++){
      cin >> d;
      c=true;

      if(mp.find(d)!=mp.end()){
	pair<char,char> target=*mp.find(d);
	cout << target.second;
	c=false;
      }
    
      if(c) cout << d;
    }

    cout << endl;
    mp.clear();
  }
  
  return 0;
}