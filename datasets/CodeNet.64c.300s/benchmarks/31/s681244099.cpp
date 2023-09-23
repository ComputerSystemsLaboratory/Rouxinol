#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int ch[40]={0},in;
    
    for(int i=0;i<28;i++){
        scanf("%d",&in);
        ch[in]=1;
    }
    
    for(int i=1;i<=30;i++){
        if(!ch[i])printf("%d\n",i);
    }
    
    return 0;
}