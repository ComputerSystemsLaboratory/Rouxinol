#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;


int main(){
  int n;
  scanf ("%d",&n);
  while(n){
    int k;
    vector<int> p(n);
    for(int t=0;t<n;t++){
      scanf ("%d",&p[t]);
    }
    sort(p.begin(),p.end());
    k=p[1]-p[0];
    for(int t=1;t<n-1;t++){
      if(k>(p[t+1]-p[t])){
        k=(p[t+1]-p[t]);
      }
    }
    printf("%d\n",k);
    scanf ("%d",&n);
  }
}

