#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int n,m;
  vector<string> u;
  string t;

  cin >> n;

  for(int i=0;i<n;i++){
    string var;
    cin >> var;
    u.push_back(var);
  }

  cin >> m;
  int state=0; // close

  for(int i=0;i<m;i++){
    cin >> t;
    for(int j=0;j<n;j++){
      if(t==u[j]){
        if(state==0){
          cout << "Opened by " << t << endl;
          state=1;
        }else{
          cout << "Closed by " << t << endl;
          state=0;
        }
        break;
      }else if(t!=u[j]&&j==n-1){
        cout << "Unknown " << t << endl;
        break;
      }
    }
  }
  return 0;
}