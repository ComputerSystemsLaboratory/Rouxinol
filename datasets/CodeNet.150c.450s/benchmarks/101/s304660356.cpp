#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;
constexpr int MAX = 100000;

vector<int> Group_list[MAX];
const int NIL = -1;
int Check_list[MAX];
int n;

void Checking(){
  //init
  rep(i,n) Check_list[i] = NIL;
  stack<int> stk;
  int check_cnt = 0;
  //solve
  rep(i,n){
    if(Check_list[i] == NIL) {
      stk.push(i);
      check_cnt++;
      Check_list[i] = check_cnt;
    }
    int now, next;
    while(!stk.empty()){
        now = stk.top();
        stk.pop();
        rep(j, Group_list[now].size()){
          next = Group_list[now][j];
          if(Check_list[next] == NIL) {
            Check_list[next] = check_cnt;
            stk.push(next);
          }
        }
    }
  }
}

int main(){
  int m,q;
  int from, to;
  cin >> n >> m;
  rep(i,m){
    cin >> from >> to;
    Group_list[from].push_back(to);
    Group_list[to].push_back(from);
  }

  Checking();

  cin >> q;
  rep(i,q){
    cin >> from >> to;
    if(Check_list[from] == Check_list[to] && Check_list[from] != NIL){
      cout << "yes" << endl;;
    }else{
      cout << "no" << endl;
    }
  }
  

  return 0;
}
