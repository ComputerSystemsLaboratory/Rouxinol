#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;


int main(void) {

  string s;
  priority_queue<int> pq;
  while(cin >> s){
    if( s == "end" ) break;
    else if( s == "extract" ){
      cout << pq.top() << endl;
      pq.pop();
    }else{
      int n;
      cin >> n;
      pq.push(n);
    }
  }

  return 0;
}

// EOF