#include <iostream>
#include <cmath>
using namespace std;
int main(void){
  int m,f,r;
  int i;

  for(i=0;;i++){
    cin >> m >> f >> r;
    if(m+f+r==-3)break;

    if(m==-1 || f==-1)cout << 'F' << endl;
    else if(m+f>=80)cout << 'A' << endl;
    else if(m+f>=65)cout << 'B' << endl;
    else if(m+f>=50)cout << 'C' << endl;
    else if(m+f>=30 && r>=50)cout << 'C' << endl;
    else if(m+f>=30)cout << 'D' << endl;
    else cout << 'F' << endl;
  }

    return 0;
}