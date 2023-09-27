#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
  int m,mi,ma;
  scanf ("%d %d %d",&m,&mi,&ma);
  while(m){
    int ans=0;
    int k=0;
    vector<int> p(m);
    for(int t=0;t<m;t++){
      scanf ("%d",&p[t]);
    }
    for(int t=mi-1;t<ma;t++){
      if(k<=(p[t]-p[t+1])){
        k=(p[t]-p[t+1]);
        ans=t;
      }
    }
    printf("%d\n",ans+1);
    scanf ("%d %d %d",&m,&mi,&ma);
  }
}


