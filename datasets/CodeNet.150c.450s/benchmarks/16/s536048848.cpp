#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

struct pool{
  int idx;
  int area;
};

void print_stack(stack<pool> s){

  printf("print stack\n");
  while(s.size() > 0){
    pool& p = s.top();
    printf("idx:%d area:%d\n", p.idx, p.area);
    s.pop();
  }
  printf("\n");
}

int main(){
  stack<int> S1;
  stack<pool> S2;
  char c;
  int sum = 0;

  for(int i = 0; cin >> c; i++){
//    fprintf(stderr, "%d\n",i);
    if(c == '\\'){
      S1.push(i);
    }else if(c== '/' && S1.size() > 0){
      int j = S1.top();
      S1.pop();
      sum += i - j;

      int tmp=0;
      if(S2.size() > 0){
        bool flag = false;
        while(S2.size()>0){
          pool& p = S2.top();
          if(p.idx > j){
            S2.pop();
            tmp += p.area;
            flag = true;
          }else{
            pool p2 = {j, tmp+i-j};
            S2.push(p2);
            flag = false;
            break;
          }
        }
        if(flag){
          pool p2 = {j, tmp+i-j};
          S2.push(p2);
        }
      }else{
        pool p2 = {j, i-j};
        S2.push(p2);
      }
//      print_stack(S2);
    }
  }

  printf("%d\n", sum);

  printf("%d", (int)S2.size());

  vector<int> v;

  while(S2.size() > 1){
    pool& p = S2.top();
//    printf("%d(%d) ", p.area, p.idx);
    v.push_back(p.area);
    S2.pop();
  }
  if(S2.size() == 1){
    pool& p = S2.top();
//    printf("%d(%d)\n", p.area, p.idx);
    v.push_back(p.area);
  }
  std::reverse(v.begin(), v.end());
  for(int x: v){
    printf(" %d",x);
  }
  printf("\n");
}

