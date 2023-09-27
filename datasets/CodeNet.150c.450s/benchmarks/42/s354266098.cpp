#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <queue>


using namespace std;

int main(){
  int N, Q; cin >> N >> Q;
  queue<string> name;
  queue<int> tm;

  for(int i=0;i<N;++i){
    string s;
    int t;
    cin >> s >> t;
    name.push(s); tm.push(t);
  }

  int now = 0;
  while(!name.empty()){
    string s = name.front(); name.pop();
    int t = tm.front(); tm.pop();
    if(t > Q){
      now += Q;
      name.push(s);
      tm.push(t - Q);
    }
    else{
      now += t;
      cout << s << " " << now << endl;
    }
  }

  return 0;
}