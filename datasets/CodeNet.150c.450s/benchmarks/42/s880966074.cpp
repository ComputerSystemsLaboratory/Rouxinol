#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;

  queue<string> name;
  queue<int> time;
  for(int i=0;i<n;i++){
    string nm;
    int tm;
    cin >> nm >> tm;
    name.push(nm);
    time.push(tm);
  }

  int total=0;
  while(! name.empty()){
    if(time.front()<=q){
      total += time.front();

      cout << name.front() << ' ' << total << endl;
      
      time.pop();
      name.pop();
    }else{
      total += q;
      time.push(time.front()-q);
      name.push(name.front());
      time.pop();
      name.pop();
    }
  }
  return 0;
}