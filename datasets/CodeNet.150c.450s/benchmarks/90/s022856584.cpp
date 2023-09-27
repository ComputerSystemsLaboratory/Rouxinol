#include<iostream>
using namespace std;
int const N = 101;
int main(){
  int num[N],M[N];
  int n,max,min;
  for(int i=1;i<=100;i++){
    num[i] = 0;
  }
  while(cin >> n){
    num[n]++;
  }
  max = num[1];
  min = num[1];
  for(int i=1;i<=100;i++){
    if(max < num[i])
      max = num[i];
  }
  for(int i=1;i<=100;i++){
    int count = 0;
    if(max == num[i])
      cout << i << endl;
    
  }

  
}