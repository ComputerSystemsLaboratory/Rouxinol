#include <bits/stdc++.h>
using namespace std;

int main(){

  int student[30];
  memset(student,-1,sizeof(student));

  for(int i = 0; i < 28; i++){
    int n;
    cin >> n;
    student[n-1] = 0;
  }

  for(int i = 0; i < 30; i++){
  if(student[i] == -1) cout << i+1 << endl;
  }


}