#include<cstdio>
#include<stack>
using namespace std;

int main(){
  int x;
  stack<int> q;
  while(scanf("%d", &x) != EOF){
    if(x == 0){
      printf("%d\n", q.top());
      q.pop();
    }
    else{
      q.push(x);
    }
  }
  return 0;
}