#include <iostream>
using namespace std;

int main(){
  int S=0,sec=0,min=0,hour=0;
  cin >> S;
  sec=S%60;
  min=((S-sec)/60)%60;
  hour=S/3600;

  cout << hour << ":" << min << ":" << sec << endl;

}