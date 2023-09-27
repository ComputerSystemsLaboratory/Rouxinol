#include <iostream>
#include <map>
using namespace std;

int main()
{
  int n,m;
  string u;
  map<string, bool> mp;

  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> u;
    mp[u] = true;
  }

  string t;
  bool isOpen = false;
  cin >> m;
  for(int j = 0 ; j < m ; j++){
    cin >> t;
    if(mp[t] == true){
      if(isOpen == true){
	cout << "Closed by " << t << '\n';
      }else{
	cout << "Opened by " << t << '\n';
      }
      isOpen = !isOpen; 
    }else{
      cout << "Unknown " << t << '\n';
    }
  }

  
  return 0;
}