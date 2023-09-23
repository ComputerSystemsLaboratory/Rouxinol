#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;


int main(){
    int coin[6]={1,5,10,50,100,500},in,ans;
    

 while(1){
    ans=0;
    scanf("%d",&in);
    
    if(in==0)
      break;

    in=1000-in;
    
    for(int i=5;i>=0;i--){
        ans+=in/coin[i];
        in%=coin[i];
    }
    
    printf("%d\n",ans);
    
  }
    return 0;
}