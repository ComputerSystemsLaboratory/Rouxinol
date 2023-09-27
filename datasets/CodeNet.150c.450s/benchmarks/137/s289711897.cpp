/*sort2*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
#define le 1000000007;

int main(void){
  /*??\???????§?*/
  map<string,int> d;
  string str;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> str;
    if(str=="insert"){
      cin >> str;
      d[str]++;
    }else{
      cin >> str;
      if(d[str]>0)cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  /*??\?????????*/
  return 0;
}