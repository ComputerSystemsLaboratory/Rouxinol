#include <iostream>
using namespace std;

int main(){
  int N;
  while(cin >> N && N>0){
    int pt,total,max,min;
    total=0;
    max=0;
    min=1000;

    for(int i=0;i<N;i++){
      cin >> pt;
      if(pt>max) max=pt;
      if(pt<min) min=pt;
      total+=pt;
    }
    cout << (total-min-max)/(N-2) << endl;
  }

  return 0;
}