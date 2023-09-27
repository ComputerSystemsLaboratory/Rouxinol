#include <iostream>
#include <vector>
using namespace std;

int LCGs(int N, int X, int A, int B, int C, const int *Y) {
  int counter = 0;

  for(int i = 0; i < N; i ++) {
    for(; counter <= 10000; counter++) {
      if(X == Y[i]) {
        if(i < (N-1) && Y[i] == Y[i+1]) {
          counter++;
          X = ((A * X + B) % C);
        }
        break;
      }
      X = ((A * X + B) % C);
    }
  }

  if(counter <= 10000)
    return counter;
  else
    return -1;
}

int main() {
  int N; //リールの数                                                                                     
  int X; //乱数の初期値                                                                                   
  int A, B, C; //定数                                                                                     
  vector<int> Y; //特殊な絵柄で停止する条件                                                               

  while(1) {
    cin >> N >> A >> B >> C >> X;
    if(N == 0)
      break;

    int y;
    for(int i = 0; i < N; i++) {
      cin >> y;
      Y.push_back(y);
    }

    cout << LCGs(N, X, A, B, C, &Y.front()) << endl;
    Y.clear();
  }
}

