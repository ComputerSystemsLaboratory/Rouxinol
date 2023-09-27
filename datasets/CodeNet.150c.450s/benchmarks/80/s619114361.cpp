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
    int a=0,b=0,in;
    
    for(int i=0;i<4;i++){
        scanf("%d",&in);
        a+=in;
    }
    for(int i=0;i<4;i++){
        scanf("%d",&in);
        b+=in;
    }
    
    if(a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
    
    return 0;
}