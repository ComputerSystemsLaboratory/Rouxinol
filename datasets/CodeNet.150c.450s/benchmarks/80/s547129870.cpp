#include<iostream>
using namespace std;

int main(){
  int ten_a,ten_b;
  int ans_a=0,ans_b=0,ans_big;
  for(int i=0;i<4;i++){
    cin >> ten_a;
    ans_a += ten_a;
  }
  for(int i=0;i<4;i++){
    cin >> ten_b;
    ans_b += ten_b;
  }
  cout << max(ans_a,ans_b) << endl;
}
  
  