#include <bits/stdc++.h>
using namespace std;

class Process{
  public:
  string name;
  int time;
};

class myqueue{
  public:
  int size;
  int begin;
  int end;
  Process v[111111];
  myqueue(){
    size = 111111;
    begin = 0;
    end = 0;      //[begin, end)
  }

  void push(Process a){
    v[end] = a;
    end = (end + 1) % size;
  }
  Process front(){
    return v[begin];
  }
  void pop(){
    begin = (begin + 1) % size;
  }
  bool isEmpty(){
    return begin == end;
  }
  void pr(){
    for(int i = begin; i < end; i++){
      cout << v[i].name << " ";
    }
    cout << endl;
  }
};

int main(void){
  int n, q;
  myqueue que;
  cin >> n >> q;
  for(int i = 0; i < n; i++){
    Process tmp;
    cin >> tmp.name >> tmp.time;
    que.push(tmp);
  }
  int t = 0;
  while(!que.isEmpty()){
    Process a = que.front(); que.pop();
    if(a.time > q){
      a.time -= q;
      que.push(a);
      t += q;
    }else{
      t += a.time;
      cout << a.name << " " << t << endl;
    }
  }
  return 0;
}