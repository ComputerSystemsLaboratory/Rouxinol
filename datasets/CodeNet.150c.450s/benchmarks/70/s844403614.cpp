#include <iostream>
#include <string>
using namespace std;

int main() {
  int k,m,d;
  string today[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};

  while(cin >>m>>d){
    if(m==0)break;

    for(int i=0;m-1>i;i++) d+=mon[i];

    k=d%7+2;
    cout <<today[k%7]<<endl;

  }
}