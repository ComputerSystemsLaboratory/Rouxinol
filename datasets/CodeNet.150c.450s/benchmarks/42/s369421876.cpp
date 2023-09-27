#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;
  vector<string> name(n);
  vector<int> time(n);
  queue<int>  process;
  for(int i=0;i<n;i++){
    cin >> name[i] >> time[i];
    process.push(i);
  }
  int t = 0;
  while(!process.empty()){
    int f = process.front();
    if(time[f] <= q){
      t += time[f];
      cout << name[f] << " " << t << endl;
      process.pop();
    }
    else{
      t += q;
      time[f] -= q;
      process.pop();
      process.push(f);
    }
  }
}

