#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

#include <sstream>

using namespace std;

int main(){
  int n;
  vector<int> s;
  int q;
  vector<int> t;
  
  cin >> n;
  for(int i=0;i<n;i++){
    int tmp;
    cin >> tmp;
    s.push_back(tmp);
  }
  
  cin >> q;
  for(int i=0;i<q;i++){
    int tmp;
    cin >> tmp;
    t.push_back(tmp);
  }

  int cnt=0;
  for(int i=0;i<q;i++){
    for(int j=0;j<n;j++){
      if(s[j]==t[i]){
	cnt++;
	break;
      }
    }
  }

  cout << cnt << endl;
      // t[i]???s????????????
      
      
     
  



      
  

}