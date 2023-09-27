#include <iostream>
#include <vector>
using namespace std;

int main() {
  while(true){
    int a;
    cin >> a;

    if(a == 0){
      break;
    }

    vector<int> b(a);
    int max = -9999;
    int min = 99999;
    int maxi,mini;
    for(int i = 0; i < a; i++){
      cin >> b[i];
      if (max < b[i]) { max = b[i];maxi = i; }
      if (min > b[i]) { min = b[i];mini = i; }
    }
    b[mini] = 0;
    b[maxi] = 0;

    int sum = 0;
    for(int i = 0; i < a; i++){
      sum += b[i];
    }
    cout << sum / (a - 2) << endl;
  }
}