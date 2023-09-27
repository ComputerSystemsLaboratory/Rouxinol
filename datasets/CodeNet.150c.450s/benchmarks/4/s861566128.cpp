#include<iostream>

using namespace std;

int main(){
  int m,f,r;
  string LNK;
  while(cin >> m >> f >> r){
    if(m==-1 && f==-1 && r==-1) break;
    if(m==-1 || f==-1) LNK = "F";
    else if(m+f>=80) LNK = "A";
    else if(m+f>=65) LNK = "B";
    else if(m+f>=50) LNK = "C";
    else if(m+f>=30){ LNK = "D";
      if(r>=50) LNK = "C";}
    else if(m+f<30) LNK = "F";
    cout << LNK << endl;
  }
}