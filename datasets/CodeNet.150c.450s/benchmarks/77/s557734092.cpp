#include <iostream>
#include <vector>
using namespace std;

int main(){

  const int MAX = 21;
  int n, m;

  while(cin >> n){
    if(n == 0) break;

    vector<vector<bool> > p(MAX, vector<bool>(MAX, 0));
    int x, y;
    for(int i=0; i<n; i++){
      cin >> x >> y;
      p[x][y] = 1;
    }

    string v;
    int px,py;
    px = py = MAX/2;
    int g, cnt=0;
    cin >> m;
    for(int i=0; i<m; i++){
      cin >> v >> g;
      //N
      if(v == "N"){
	for(int j=1; j<=g; j++){
	  py++;
	  if(p[px][py]){
	    cnt++;
	    p[px][py] = 0;
	  }
	}
      }
      //E
      if(v == "E"){
	for(int j=1; j<=g; j++){
	  px++;
	  if(p[px][py]){
	    cnt++;
	    p[px][py] = 0;
	  }
	}
      }
      //S
      if(v == "S"){
	for(int j=1; j<=g; j++){
	  py--;
	  if(p[px][py]){
	    cnt++;
	    p[px][py] = 0;
	  }
	}
      }
      //W
      if(v == "W"){
	for(int j=1; j<=g; j++){
	  px--;
	  if(p[px][py]){
	    cnt++;
	    p[px][py] = 0;
	  }
	}
      }
    }
      if(cnt == n){
	cout << "Yes" << endl;
      }
      else{
	cout << "No" << endl;
      }
  }
  return 0;
}