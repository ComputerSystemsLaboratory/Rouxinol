#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> u(n);
  for(int i=0; i<n; i++)
    cin >> u[i];

  int m;
  cin >> m;
  string t;
  bool flag = false;
  for(int i=0; i<m; i++){
    cin >> t;
    bool known = false;
    for(int j=0; j<n; j++){
      if(t == u[j]){
        if(flag){
          cout << "Closed by " << t << endl;;
        }else{
          cout << "Opened by " << t << endl;
        }
        known = true;
        flag = !flag;
        break;
      }
    }
    if(!known)
      cout << "Unknown " << t << endl;
  }
  
  return 0;
}