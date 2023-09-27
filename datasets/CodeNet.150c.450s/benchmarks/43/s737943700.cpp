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
    int a,b,sa,sb,n;
    
    
    while(1){
    scanf("%d",&n);
    if(n==0) break;
    sa=0;sb=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a>b)
            sa+=a+b;
        else if(a<b)
            sb+=a+b;
        else{
            sa+=a;
            sb+=b;
        }
    }
    
    printf("%d %d\n",sa,sb);
    }
    return 0;
    
}