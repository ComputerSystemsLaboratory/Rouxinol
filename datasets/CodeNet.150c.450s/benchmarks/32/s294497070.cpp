#include<iostream>
using namespace std;
int main(){

  int m,a,b,ans;
  int p[201];

  cin >> m >> a >> b;
  while(m != 0 || a != 0 || b != 0){
    for(int i = 0;i < m;i++){
      cin >> p[i];
    }
    for(int i = a;i <= b;i++){
      if(i == a) ans = a;
      else if(p[i-1]-p[i] >= p[ans-1]-p[ans]) ans = i;
    }
    cout << ans << endl;
    cin >> m >> a >> b;
  }

  return (0);
}