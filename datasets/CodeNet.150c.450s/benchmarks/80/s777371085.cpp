#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int A = 0, B = 0 , pt;
  for(int i = 0 ; i < 4 ; i++ ) cin >> pt , A += pt;
  for(int j = 0 ; j < 4 ; j++ ) cin >> pt , B += pt;
  cout << max(A,B) << endl;
}