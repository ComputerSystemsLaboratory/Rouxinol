#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>

int main()
{
  
  int m,min,max;
  while(scanf("%d%d%d",&m,&min,&max)==3){
      if(m==0&&min==0&max==0){
          break;
      }
      else
      {
          int a[100000];
          int count = 0;
          for(int i=0;i<m;i++){
              scanf("%d",&a[i]);
          }
          int step = 0;
          for(int i=min;i<=max;i++){
              if(a[i-1]-a[i]>=step){
                 step = a[i-1]-a[i];
                 count = i;
              }
          }
          printf("%d\n",count);
              
          
      }
      
  }
    return 0;
}

