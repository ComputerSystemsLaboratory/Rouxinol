#include<iostream>

using namespace std;

int main(){
  bool student[31];
  int n;
  
  for(int i = 0; i< 31; i++){
    student[i] = 0;
  }

  for(int i = 0; i< 28; i++){
    cin >> n;
    student[n] = 1;
  }

  for(int i = 1; i< 31; i++){
    if(student[i] == 0) cout << i << endl;
  }

  return 0;
}