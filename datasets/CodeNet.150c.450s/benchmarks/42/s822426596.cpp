#include <bits/stdc++.h>
using namespace std;

pair<string, int> p[1000000];
pair<string, int> key;
int tail;
int head;

void push(string str, int n){
  p[tail].first = str;
  p[tail].second = n;
  tail++;
}

void pop(){
  key = p[head];
  head++;
}


int main(){
  int n, q;
  cin >> n >> q;

  for(int i = 0; i < n; i++){
    cin >> p[i].first >> p[i].second;
  }
  tail = n;

  int cnt = 0;
  int sum = 0;
  while(cnt != n){
    pop();
    string name = key.first;
    int time = key.second;
      // cout << name << " " << time << endl;
    if(time - q > 0){
      sum+=q;
      push(name,time-q);
    }else {
      cnt++;
      sum+=time;
      cout << name << " " << sum << endl;
    }
  }

}