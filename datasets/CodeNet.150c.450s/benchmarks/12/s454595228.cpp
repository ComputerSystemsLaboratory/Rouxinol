#include <iostream>
using namespace std;
#define MAX_H 250

int n;
int node[MAX_H + 1];

int main(void){
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> node[i];
  for(int i = 1; i <= n; i++){
    cout << "node " << i << ": ";
    cout << "key = " << node[i] << ", ";
    if(i/2 != 0) cout << "parent key = " << node[i/2] << ", ";
    if(i*2 <= n) cout << "left key = " << node[i*2] << ", ";
    if(i*2 + 1 <= n) cout << "right key = " << node[i*2+1] << ", ";
    cout << endl;
  }
  return 0;
}