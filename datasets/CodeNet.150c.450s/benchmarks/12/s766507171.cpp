#include<iostream>
#include<vector>
#define INF 10000000000
using namespace std;

int main(){
  int h;
  cin >> h;

  vector<long long int> v(h + 250);

  for(int i = 0; i < h + 250; i++) v[i] = INF;
  
  for(int i = 1; i <= h; i++) cin >> v[i];

  for(int i = 1; i <= h; i++){
    cout << "node " << i << ": key = " << v[i] << ", ";

    if(v[i/2] != INF) cout << "parent key = " << v[i/2] << ", ";
    if(v[i*2] != INF) cout << "left key = " << v[i*2] << ", ";
    if(v[i*2 + 1] != INF) cout << "right key = " << v[i*2 + 1] << ", ";

    cout << endl;
    
  }

  return 0;

}

