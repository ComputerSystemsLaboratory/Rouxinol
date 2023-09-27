#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  while(true){
    cin >> n;
    if(n == 0)
      break;

    vector<string> f(n);
    for(int i=0; i<n; i++)
      cin >> f[i];

    int num = 0;
    bool flag = false;
    bool r = false, l = false;
    for(int i=0; i<n; i++){
      if(f[i] == "ru")
        r = true;
      if(f[i] == "rd")
        r = false;
      if(f[i] == "lu")
        l = true;
      if(f[i] == "ld")
        l = false;

      if(flag){
        if(!r && !l){
          flag = !flag;
          num++;
        }
      }else{
        if(r && l){
          flag = !flag;
          num++;
        }
      }
    }

    cout << num << endl;
  }
  
  return 0;
}