#include<iostream>
using namespace std;

int main(){
  int m, m1 = 0, m2 = 0, m3 = 0;
  for(int i=0;i<10;i++){
    cin >> m;
    if(m > m1){
      m3 = m2;
      m2 = m1;
      m1 = m;
    }else if(m > m2){
      m3 = m2;
      m2 = m;
    }else if(m > m3){
      m3 = m;
    }
  }
  cout << m1 << endl;
  cout << m2 << endl;
  cout << m3 << endl;
  return 0;
}

