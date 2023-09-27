#include <iostream>
 using namespace std;
int main(){
  int N;
  cin >>N;
  int ans;
  ans = 0;
  int AK[1000001];
  for(int i=0;i<1000001;i++){
    AK[i]=0;
  }
  for(int i=1;i<=100;i++){
    for(int j=1;j<=100;j++){
      for(int k=1;k<=100;k++){
        AK[i*i+j*j+k*k+i*k+j*k+i*j]++;
      }
    }
  }
  for(int i=1;i<=N;i++){
  cout << AK[i] <<endl;
  }
}