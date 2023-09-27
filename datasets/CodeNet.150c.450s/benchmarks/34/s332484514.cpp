#include<iostream>
using namespace std;
int main(){
  long long int step[31]={1,1,2};
  for(int i=3; i<31; i++){
    step[i] = step[i-1]+step[i-2]+step[i-3];
  }
  int n;
  while(cin >>n,n){
    cout <<(step[n]+3649)/3650<<endl;
  }
}