#include<iostream>
#include<cstdio>

using namespace std;

int days_cout(int Y, int M, int D){
  Y--; M--; D--;
  int days = (int)(Y / 3) * 590 + Y % 3 * 195;
  if((Y + 1)  % 3 == 0) days += M * 20;
  else days += (int)(M / 2) * 39 + M % 2 * 20;
  days += D;
  return days;
}

int main() {
  int n, Days, Y, M, D;
  cin >> n;
  Days = days_cout(1000, 1, 1);
  while(n--) {
    cin >> Y >> M >> D;
    cout << Days - days_cout(Y, M, D) << endl;
  }
}
    

    