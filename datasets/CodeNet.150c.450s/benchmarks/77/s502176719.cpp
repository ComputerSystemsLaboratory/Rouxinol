#include<iostream>
#include<set>

using namespace std;

int main() {
  int n;
  while(cin>>n && n!=0) {
    set<pair<int, int> > mySet;
    for(int i=0; i<n; i++) {
      int x, y;
      cin>>x>>y;
      mySet.insert(make_pair(x, y));
    }
    int m;
    cin>>m;
    int nowX = 10, nowY = 10;
    string dir;
    int move;
    for(int i=0; i<m; i++) {
      cin>>dir;
      cin>>move;
      for(int j=0; j<move; j++) {
	if(dir == "N") {
	  nowY++;
	}
	else if(dir == "S") {
	  nowY--;
	}
	else if(dir == "E") {
	  nowX++;
	}
	else if(dir == "W") {
	  nowX--;
	}
	if(mySet.find(make_pair(nowX, nowY)) != mySet.end()) {
	  mySet.erase(make_pair(nowX, nowY));
	}
      }
    }
    if(mySet.empty()) {
      cout<<"Yes"<<endl;
    }
    else {
      cout<<"No"<<endl;
    }
  }
}