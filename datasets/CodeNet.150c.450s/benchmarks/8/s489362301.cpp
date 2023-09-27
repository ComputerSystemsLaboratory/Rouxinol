#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int N, val1=0, val2=0;
  string str1, str2;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> str1 >> str2;
    if(str1 > str2){
      val1 += 3;
    }else if(str1 < str2){
      val2 += 3;
    }else{
      val1++;
      val2++;
    }
  }
  cout << val1 << " " << val2 << endl;
  return 0;
}