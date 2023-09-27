#include <iostream>
#include <string>
using namespace std;

int main(){
  int n;
  cin >> n;
  
  string u[257];
  for(int i=0;i<n;i++)cin >> u[i];

  int m;
  cin >> m;
  
  string t;
  int sta = 1;
  for(int i=0;i<m;i++){
    cin >> t;
    
    int flg = 0;
    for(int i=0;i<n;i++){
      if(t == u[i]) {
	flg = 1;
	sta++;
	break;
      }
    }

    if(flg == 1){
      if(sta%2 == 1) cout << "Closed by ";
      else cout << "Opened by ";
      cout << t << endl;
    }
    else cout << "Unknown "<<t<<endl;
    
  }
  return 0;
}