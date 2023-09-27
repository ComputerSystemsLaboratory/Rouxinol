#include<iostream>

using namespace std;

const int MAX = 201;

struct Pos{
  int up;
  int right;
};


Pos square[MAX];
int N;

int main(){

  while(cin >> N && N){
    square[0].up = square[0].right = 0;

    for(int i = 1; i < N; i++){
      int a,b;
      cin >> a >> b;
      square[i] = square[a];
      if(b == 0) square[i].right--;
      if(b == 1) square[i].up--;
      if(b == 2) square[i].right++;
      if(b == 3) square[i].up++;
    }
    int data[4] = {0,0,0,0};

    for(int i = 0; i < N; i++){
      data[0] = max(data[0],square[i].up);
      data[1] = min(data[1],square[i].up);
      data[2] = max(data[2],square[i].right);
      data[3] = min(data[3],square[i].right);
    }
    cout << data[2]-data[3]+1 << " " <<  data[0]-data[1]+1<< endl;
  }
  return 0;
}