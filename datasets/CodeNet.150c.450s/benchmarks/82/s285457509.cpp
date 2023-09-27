#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<complex>
using namespace std;

struct Dice{
  int n[6];
  void roll(char c){
    int nn;
    if(c == 'E'){
      nn = n[0];
      n[0] = n[3];
      n[3] = n[5];
      n[5] = n[2];
      n[2] = nn;
    }else if(c == 'W'){
      nn = n[0];
      n[0] = n[2];
      n[2] = n[5];
      n[5] = n[3];
      n[3] = nn;
    }else if(c == 'N'){
      nn = n[0];
      n[0] = n[1];
      n[1] = n[5];
      n[5] = n[4];
      n[4] = nn;
    }else if(c == 'S'){
      nn = n[0];
      n[0] = n[4];
      n[4] = n[5];
      n[5] = n[1];
      n[1] = nn;
    }else if(c == '!'){
      nn = n[1];
      n[1] = n[3];
      n[3] = n[4];
      n[4] = n[2];
      n[2] = nn;
    }

  }
  int top(){
    //cout << n[0] << endl;
    return n[0];
  }
  int right(){
    //cout << n[2] << endl;
    return n[2];
  }
  int left(){
    //cout << n[3] << endl;
    return n[3];
  }
  int front(){
    return n[1];
  }
  int back(){
    return n[4];
  }
  int under(){
    return n[5];
  }
};


int main(){
  Dice d;
  for(int i = 0; i < 6; i++) cin >> d.n[i];
  int q; cin >> q;
  for(int i = 0; i < q; i++){
    int a,b; cin >> a >> b;
    if(d.right() == a) d.roll('W');
    if(d.left() == a) d.roll('E');
    if(d.front() == a) d.roll('N');
    if(d.back() == a) d.roll('S');
    if(d.under() == a){
      d.roll('E');
      d.roll('E');
    }
    while(d.front() != b) d.roll('!');
    cout << d.right() << endl;
  }
  return 0;
}

