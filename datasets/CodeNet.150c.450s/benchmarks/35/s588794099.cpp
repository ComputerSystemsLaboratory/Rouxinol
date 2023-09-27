#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define INF -100000000

int main(){
  

  int dataSets;

  while(true){
    vector<int> a;
    cin >> dataSets;
    if(dataSets==0){break;}
    for(int i=0;i<dataSets;i++){
      int tmpa;
      cin >> tmpa;
      a.push_back(tmpa);

    }

    int tmax=INF;
    // i?????§????????§?????????????????????
    vector<int> tmpMax(dataSets + 1,0);
    tmpMax[0] = 0;
    for(int i=1;i<dataSets+1;i++){
      tmpMax[i] += tmpMax[i-1] + a[i-1];
    }

    for(int i=0;i<dataSets;i++){
      for(int j=i+1;j<dataSets+1;j++){
	tmax = max(tmax, tmpMax[j]-tmpMax[i]);
      }
    }
    
    // for(int i=0;i<dataSets+1;i++){
      // for(int j=i;j<dataSets;j++){
	// tmax = max(tmax, tmpMax[j+1] - tmpMax[i]);
      // }
    // }
    
    cout << tmax << endl;
    
  }

  return 0;

}
  