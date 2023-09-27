#include <iostream>
using namespace std;
int N,S;
int set = 0;
int main(){
  while(set <= 20){
    //while(cin >> N && N >= 3 && N <= 100) {
    cin >> N;
    if (N == 0) break;
    int largest = 0;
    int smallest = 1000;
    int sum = 0;
    for (int i = 0; i <N;++i) {
      cin >> S;
      if(largest < S) largest = S;
      if(smallest >S) smallest = S;
      sum += S;
    }
    cout << (sum - largest - smallest)/(N-2) << endl; 
  ++set;
  }
  return 0;
}