//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main(){
  int n,q,counter = 0;
  queue<string> name;
  queue<int> time;
  cin >> n >> q;
  string str;
  int buf;
  for(int i=0; i<n; i++){
    cin >> str >> buf;
    name.push(str);
    time.push(buf);
  }

  //RR???????£?
  while(!time.empty()){
    buf = time.front();
    str = name.front();
    time.pop();
    name.pop();
    if(buf > q){
      buf -= q;
      name.push(str);
      time.push(buf);
      counter += q;
    }
    else{
        counter += buf;
      cout << str << " " << counter << endl;
    }
  }
}