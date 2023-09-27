#include <iostream>

using namespace std;

int main(void){
  while(1){
    int n;
    cin >> n;
    if(n == 0){return 0;}

    int point[n];
    for(int i = 0 ; i < n ; i++){
      cin >> point[i];
    }

    int sum = 0;
    int max = -1;
    int min = 1001;
    for(int i = 0 ; i < n ; i++){
      if(max < point[i]){max = point[i];}
      if(min > point[i]){min = point[i];}

      sum += point[i];
    }

    cout << (int)(sum - max - min)/(n - 2) << endl;
  }

}