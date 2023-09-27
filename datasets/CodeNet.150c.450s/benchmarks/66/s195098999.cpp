#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(void){

  int n;
  string u;
  cin >> n;
  set<string>U;
  for(int i=0;i<n;i++){
    cin >> u;
    U.insert(u);
  }

  int m;
  string t;
  cin >> m;
  bool fg = false;
  while(m--){
    cin >> t;
    if(!fg && U.find(t) != U.end())cout << "Opened by " << t << endl, fg^=true;
    else if(fg && U.find(t) != U.end())cout << "Closed by " << t << endl, fg^=true;    
    else cout << "Unknown " << t << endl;
  }
  return 0;
}