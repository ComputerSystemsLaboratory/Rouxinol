#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  while(true){
    int N, score[] = {0, 0};
    scanf("%d", &N);
    if(N == 0)
      return 0;

    for(int i = 0; i < N; i++){
      int a, b;
      cin >> a >> b;
      if(a > b)
        score[0] += a + b;
      else if(a < b)
        score[1] += a + b;
      else{
        score[0] += a;
        score[1] += b;
      }
    }
    printf("%d %d\n", score[0], score[1]);
  }
}