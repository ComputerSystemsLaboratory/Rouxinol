#include <vector>
#include <iostream>
using namespace std;
int main(){
  int n,a,b,c,x;
  while(cin >> n >> a >> b >> c >> x,n || a || b || c || x){
    vector<int> y(n);
    for(int i = 0;i < n;i++){
      cin >> y[i];
    }
    int current = x;
    int cnt = 0;
    int flag = -1;
    for(int i = 0;i <= 10000;i++){
      if(y[cnt] == current)cnt++;
      if(cnt == n){
	
	flag = i;
	break;
      }
      current = (a*current+b)%c;
    }
    if(flag == -1)cout << -1 << endl;
    else cout << flag << endl;
  }
  return 0;
}