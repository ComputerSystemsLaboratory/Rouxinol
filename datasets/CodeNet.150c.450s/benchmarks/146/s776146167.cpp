#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
  int n;
  double x[4],y[4];
  double degree[2];
  
  cin >> n;

  for(int i = n ; i > 0 ; i--){
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    degree[0] = (y[1] - y[0]) / (x[1] - x[0]);
    degree[1] = (y[3] - y[2]) / (x[3] - x[2]);

    if(degree[0] == degree[1]) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}