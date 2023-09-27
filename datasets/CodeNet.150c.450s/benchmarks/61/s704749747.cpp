#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n,a,b,c,x;
  int k;
  int count;
  vector<int> y;
  int s;

  while(cin >> n >> a >> b >> c >> x){
    if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0){
      break;
    }
    y.clear();
    count = -1;
    for(int i = 0;i < n; i++){
      cin >> k;
      y.push_back(k);
    }
    reverse(y.begin(),y.end());
    while(!y.empty()){
      if(x == *(y.end()-1)){
        y.pop_back();
      }
      x = (a*x + b) % c; 
      count++;
      if(count > 10000){
        break;
      }
    }

    if(count > 10000){
      cout << -1 << endl;
    }else{
      cout << count << endl;
    }
  }
      


      

}