#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;



int main(){
  int n;
  cin >> n;
  int cnt=0;
  for(int i=0;i<n;i++){
    
    int tmp;
    cin >> tmp;
    bool flag = false;
    if(tmp==1){
      cnt++;
      continue;
    }
    for(int j=2;j<=sqrt(tmp);j++){
      if(tmp%j==0){
	flag = true;
	break;
      }
    }

    if(flag==false){
      cnt++;
    }
  }
  cout << cnt << endl;
}