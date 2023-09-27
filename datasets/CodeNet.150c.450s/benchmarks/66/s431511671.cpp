#include <iostream>
#include <vector>
#include <set>
using namespace std;
string mes[2] = {"Closed by ","Opened by "};
int main(){
  int n,m;
  cin >> n;
  vector<string> u(n);
  set<string> U;
  for(int i = 0;i < n;i++){
    cin >> u[i];
    U.insert(u[i]);
  }
  cin >> m;
  vector<string> t(m);
  int current = 0;//しまっている
  for(int i = 0;i < m;i++){
    cin >> t[i];
    if(U.find(t[i]) == U.end()){
      cout << "Unknown " << t[i] << endl;
    }else{
      current = (current + 1)%2;
      cout << mes[current] << t[i] << endl;
    }
  }
 
}