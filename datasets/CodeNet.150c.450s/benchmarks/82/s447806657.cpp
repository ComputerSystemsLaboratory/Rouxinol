#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;

class Dice{
public:
  int face[6];
  int top(){return face[0];}
  int left(string s, string r);
  int label(int n);
  void setFace(int i, int num);
  void moveFloor(char dir);
};

void Dice::setFace(int i, int num){
  face[i] = num;
  return;
}

int Dice::left(string s, string r){
  string a = "02530";
  string b = "01540";
  string c = "12431";
  if(a.find(s) != string::npos) return face[4];
  if(a.find(r) != string::npos) return face[1];
  if(b.find(s) != string::npos) return face[2];
  if(b.find(r) != string::npos) return face[3];
  if(c.find(s) != string::npos) return face[0];
  if(c.find(r) != string::npos) return face[5];
}

int Dice::label(int n){
  for(int i=0; i<6; i++){
    if(face[i] == n) return i;
  }
}

int main(){
  int num, q;
  Dice d;
  for(int i=0; i<6; i++){
    cin >> num;
    d.setFace(i, num);
  }

  cin >> q;
  for(int i=0; i<q; i++){
    int top, flont;
    cin >> top >> flont;

    string s, r;
    s = to_string(d.label(top)) + to_string(d.label(flont));
    r = to_string(d.label(flont)) + to_string(d.label(top));
    cout << d.left(s, r) << endl;
  }

  return 0;
}

