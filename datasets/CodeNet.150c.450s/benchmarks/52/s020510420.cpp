#include<bits/stdc++.h>
using namespace std;
stack<int> s;

int main(){
  int tmp;
  while(scanf("%d", &tmp)!=EOF){
    if(tmp!=0) s.push(tmp);
    else{
      printf("%d\n", s.top());
      s.pop();
    }
  }
  return 0;
}