#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define MAX_N 101
#define MAX_M 101
using namespace std;
int N, s;
int subaverage(int sum[]){
  int average = 0;
  for(int i = 1; i < N - 1; i++){
    average += sum[i];
  }
  average = average / (N - 2);
  return average;
}
int main(){
while(true){
  cin >> N;
  int sum[N];
  if(N == 0){
    break;
  }
  for(int i = 0; i < N; i++){
    cin >> s;
    sum[i] = s;
  }
  sort(sum, sum + N);
  cout << subaverage(sum) << endl;
}
  return 0;
}

