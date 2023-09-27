#include <iostream>
using namespace std;
int X,Y,S;
int solve(int X,int Y,int S);
int maxCheck(int max,int sum);
int tax(int ratio,int price);

int solve(int X,int Y,int S) {
  int max = 0;
  for (int i=1;i<S;i++) {
    for (int j=i;j<S;j++) {
      if (tax(X,i)+tax(X,j) == S) {
	max = maxCheck(max,(tax(Y,i)+tax(Y,j)));
      }
    }
  }
  return max;
}
int maxCheck(int max,int sum) {
  if (max>sum)
    return max;
  else
    return sum;
}
int tax(int ratio,int price) {
  return int(price*(100+ratio)/100.0);
}
int main() {
  while (cin >> X >> Y >> S && X>0) {
    cout << solve(X,Y,S) << endl;
  }
}