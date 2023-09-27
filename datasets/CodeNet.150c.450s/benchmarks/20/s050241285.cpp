#include <iostream>
#include <cstdio>
using namespace std;
int main(int argc, char *argv[]){
  int sec,mini,hour;
  sec = 0;
  mini = 0;
  hour = 0;
  scanf("%d",&sec);
  
  hour = sec / 60 / 60;
  sec = sec % (60*60);
  mini = sec / 60;
  sec = sec % 60;

  cout << hour << ":" << mini << ":" << sec <<endl;
  return 0;
}