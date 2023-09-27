#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int top = 0, c[20000], area[20000][2] = {};

void push(int x){
  top++;
  c[top] = x;
}

int pop(){
  top--;
  return c[top + 1];
}

int main(){

  int sum = 0, cnt = 0;
  char ch;

  for(int i = 0;cin >> ch;i++){
    if(ch == '\\'){
      push(i);
    }else if(ch == '/' && top > 0){
      int j = pop(), tmp;
      sum += i - j;
      tmp = i - j;
      while(cnt > 0 && area[cnt][1] > j){
        tmp += area[cnt][0];
        cnt--;
      }
      cnt++;
      area[cnt][0] = tmp;
      area[cnt][1] = j;
    }
  }

  cout << sum << endl;
  cout << cnt;
  for(int i = 1;i <= cnt;i++) cout << " " << area[i][0];
  cout << endl;

  return 0;
}

