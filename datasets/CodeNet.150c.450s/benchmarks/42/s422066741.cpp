#include <iostream>
#include <queue>
using namespace std;

typedef pair<string, int> psi;

int main()
{
  int n, q, time, t = 0;
  string name;
  queue<psi> p;
  cin >> n >> q;
  for(int i = 0; i < n; i++){
    cin >> name >> time;
    p.push(psi(name, time));
  }
  while(!p.empty()){
    name = p.front().first;
    time = p.front().second;
    if(time <= q){
      t += time;
      cout << name << " " << t << endl;
    }else{
      time -= q;
      t += q;
      p.push(psi(name, time));
    }
    p.pop();
  }
}