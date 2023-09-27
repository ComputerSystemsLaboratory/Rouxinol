#include<iostream>
using namespace std;

int main(){
  int m,f,r;
  do{
    cin >> m >> f >> r;
    if(m == -1 && f == -1 && r == -1)
      ;
    else if(m == -1 || f == -1)
      cout << 'F' << endl;
    else if(m+f >= 80)
      cout << 'A' << endl;
    else if(m+f >= 65)
      cout << 'B' << endl;
    else if(m+f >= 50)
      cout << 'C' << endl;
    else if(m+f >= 30)
      r >= 50 ? cout << 'C' << endl : cout << 'D' << endl;
    else if(m+f >= 0)
      cout << 'F' << endl;
  }while(!(m == -1 && f == -1 && r == -1));
}

