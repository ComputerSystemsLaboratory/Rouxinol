//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D
#include <iostream>
using namespace std;
int main(){
  int S;
  cin >> S;
  int sec = S % 60;
  int hour = S / 3600;
  int minute = (S - hour* 3600 - sec) / 60;
  cout << hour << ":" << minute << ":" << sec << endl;
}