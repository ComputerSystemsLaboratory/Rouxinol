#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
int n;
string data[1000][2];
int score[2];
for(int i = 0; i < 2; i++){
  score[i] = 0;
}
cin >> n;
for(int i = 0; i < n; i++){
for(int j = 0; j < 2; j++){
  cin >> data[i][j];
}
}

for(int i = 0; i < n; i++){
  if(data[i][0] == data[i][1]){
  score[0]++;score[1]++;
  }else if(data[i][0] < data[i][1]){
  score[1]+=3;
  }else if(data[i][0] > data[i][1]){
  score[0]+=3;
  }
}
cout << score[0] << " " << score[1] << endl;
return 0;
}
