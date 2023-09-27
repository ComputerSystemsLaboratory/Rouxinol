#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

#include <sstream>

using namespace std;

bool DaC(int m, vector<int> &a, int i, int n){

  if(m==0){
    return true;
  }

  if(i>=n){
    return false;
  }
    
  
  return (DaC(m-a[i], a, i+1, n) || DaC(m, a, i+1, n));
}
		   
		   
int main(){
  int n;
  vector<int> a;
  int q;
  vector<int> m;

  cin >> n;
  
  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }

  cin >> q;

  for(int i=0;i<q;i++){
    int tmp;
    cin >> tmp;
    m.push_back(tmp);
  }

  for(int i=0;i<m.size();i++){
    if(DaC(m[i], a, 0, n)){
      cout << "yes" << endl;
    }else{
      cout << "no" << endl;
    }
  }
  
}