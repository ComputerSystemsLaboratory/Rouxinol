#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){

  int n,x;


  while(true){
    cin >> n>>x;
    if(n==0 && x == 0) break;

    int count=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){

          if((i+j+k+3) == x) count++;

        }
      }
    }
    cout << count <<endl;

  }
  
  
}


