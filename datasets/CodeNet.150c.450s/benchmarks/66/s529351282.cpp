#include <iostream>
#include <set>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(){

  int n;
  while(cin >> n){
    string st;
    set<string> s;
    rep(i,n){
      cin >> st; 
      s.insert(st);
    }
    int m,f=0;
    cin >> m;
    rep(i,m){
      cin >> st;
      if(s.count(st) == 0){
	cout << "Unknown " << st << endl;
      }
      else{
	if(f==0){
	  cout << "Opened by " << st << endl;
	  f=1;
	}
	else{
	  cout << "Closed by " << st << endl;
	  f=0;
	}
      }
    }
  }
}