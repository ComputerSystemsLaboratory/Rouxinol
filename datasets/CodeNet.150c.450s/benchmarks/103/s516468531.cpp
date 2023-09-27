#include<iostream>
#include<queue>

using namespace std;

typedef struct{
  int sum;
  int max;
  int rev;
}Point;

int sum,n,s;

void bfs(){
  Point fir;
  fir.sum = fir.rev = 0;
  fir.max = -1;
  queue<Point> Q;
  Q.push(fir);
  while(1){
    Point now = Q.front();
    if(now.rev == n){
      while(!Q.empty()){
	now = Q.front();
	Q.pop();
	if(now.sum == s) sum++;
      }
      break;
    }
    Q.pop();
    for(int i = now.max+1; i < 10; i++){
      Point next = now;
      next.sum += i;
      next.max = i;
      next.rev++;
      Q.push(next);
    }
  }
}

int main(){
  while(cin >> n >> s && n+s){
    sum = 0;
    bfs();
    cout << sum << endl;
  }
  return 0;
}