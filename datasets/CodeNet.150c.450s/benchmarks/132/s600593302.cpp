#include <bits/stdc++.h>
using namespace std;
vector <string> v;
string s;
vector<int> ans;
int men[51] = {0};
int main(){
  int n, p;

  cin >> n >> p;
  while((n != 0)&&(p != 0)){
    int men[51] = {0};
    int s =(int)ans.size();
    int z = p;
    while(true){
      for (int i = 0;i<n;i++){
        if(z == 0){
          z += men[i];
          men[i] = 0;
        }else{
        men[i]++;
        z--;
      }
        if(men[i] == p){
          ans.push_back(i);
          break;
        }
      }
      if(s != (int)ans.size())break;
    }
      cin >> n >> p;
  }
  for (int i = 0;i<(int)ans.size();i++){
    cout << ans[i]<<endl;
  }
  return 0;
}

