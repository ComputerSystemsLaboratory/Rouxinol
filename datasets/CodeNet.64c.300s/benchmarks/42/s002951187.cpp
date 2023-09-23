#include<iostream>
#include<cstring>

using namespace std;

const int MAX = 21;
int data[MAX][MAX];

pair<int,int> p;
int sum;

void N(int in, int m){
  for(int i = 0; i < in; i++){
    p.first += m;
    if(data[p.first][p.second]){
      sum--;
      data[p.first][p.second] = 0;
    }
  }
}

void E(int in, int m){
  for(int i = 0; i < in; i++){
    p.second += m;
    if(data[p.first][p.second]){
      sum--;
      data[p.first][p.second] = 0;
    }
  }
}

void move(char c, int i){
  if(c == 'N') N(i,1);
  if(c == 'S') N(i,-1);
  if(c == 'E') E(i,1);
  if(c == 'W') E(i,-1);
}

int main(){

  int in;
  while(cin >> in && in){
    sum = in;
    p.first = p.second = 10;
    memset(data,0,sizeof(data));
    for(int i = 0; i < in; i++){
      int x,y;
      cin >> x >> y;
      data[y][x] = 1;
    }

    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
      char c; int a;
      cin >> c >> a;
      move(c,a);
    }
    if(sum) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}