#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, a, b, c, x;
  while(true){
    cin >> n >> a >> b >> c >> x;
    if(n == 0)
      break;
    
    vector<int> y(n);
    for(int i=0; i<n; i++)
      cin >> y[i];

    int reel = 0;
    int ans = -1;
    for(int i=0; i<=10000; i++){
      if(x == y[reel])
        reel++;
      x = (a*x + b) % c;
      if(reel == n){
        ans = i;
        break;
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}