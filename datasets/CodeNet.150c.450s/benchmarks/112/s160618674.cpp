#include<iostream>
#include<map>
using namespace std;
     
int main(){
  while(true){
    int n = 0;
    cin >> n;
    if(n == 0){
      break;
    }
    map<char, char> convert;
    for(int i = 0; i < n; i++){
      char key, value;
      cin >> key; cin >> value;
      convert[key] = value;
    }
    int m = 0;
    cin >> m;
    for(int i = 0; i < m; i++){
      char val;
      cin >> val;
      if(convert.find(val) != convert.end()){
        cout << convert[val];
      }else{
        cout << val;
      }
    }
    cout << '\n';
  }
  return 0;
}