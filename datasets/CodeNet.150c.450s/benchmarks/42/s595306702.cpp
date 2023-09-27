#include <queue>
#include <iostream>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;

  string name[100000];
  int time[100000];
  queue<int> Q;
  for(int i=0; i<n; i++){
    cin >> name[i] >> time[i];
    Q.push(i);
  }
  int sum = 0;
  while(! Q.empty()){
    int m = Q.front();
    Q.pop();
    if(time[m]>q){
      Q.push(m);
      time[m] -= q;
      sum += q;
    }
    else{
      sum += time[m];
      cout << name[m] << " " << sum << endl;
    }
  }

}