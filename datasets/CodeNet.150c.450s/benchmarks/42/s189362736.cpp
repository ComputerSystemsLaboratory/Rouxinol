#include<iostream>
using namespace std;

typedef struct pp{
  char name[100];
  int t;
}P;

int main(){

  int size, q, head = 0, total = 0;

  cin >> size;

  int tail = size;

  P *u = new P[size + 2];

  cin >> q;

  for(int i = 0; i < size; i++){
    cin >> u[i].name >> u[i].t;
    //cout << u[i].name << u[i].t << endl;
  }

  while(head != tail){
    if(u[head].t > q){
      u[head].t = u[head].t - q;
      u[tail] = u[head];
      tail++;
      if(tail > size + 1){
        tail = 0;
      }
      total = total + q;
    }
    else{
      total = total + u[head].t;
      cout << u[head].name << ' ' << total << endl;
    }
    head++;
    if(head > size + 1){
      head = 0;
    }
  }

  delete[] u;

  return 0;
}

