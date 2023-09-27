#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;
int main(){
  int m,min,max;
  while(cin >> m >> min >> max,m){
    int p[m];
    for(int i=0;i<m;i++) cin >> p[i];
    int gap=0,n=0;
    for(int i=min-1;i<max;i++){
      if(gap<=p[i]-p[i+1]){
        n=i+1;
        gap=p[i]-p[i+1];
      }
    }
  cout << n << endl;
  }
}