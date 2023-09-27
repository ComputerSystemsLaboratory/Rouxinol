#include<iostream>
using namespace std;

int main(){

  int n;
  int sum;
  int count;

  while(cin >> n){
    if(n==0){ break; }

    count = 0;

    for(int i=1; i<n/2+1; i++){
      int j=i;
      sum=0;
      while(sum <= n){
        sum += j;
        if(sum == n){count ++; break;}
        j++;
      }
    }

    cout << count << endl;
  }

  return 0;
}