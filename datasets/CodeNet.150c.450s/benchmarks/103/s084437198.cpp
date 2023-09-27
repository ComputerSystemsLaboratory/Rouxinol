#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int Sum(int wa, int now, int count, int zero, int x, int y){
    wa+=now*zero;
    if(zero==1){
        count++;
    }
    
    if(now == 10 || count>x){
        return 0;
    }else if(wa==y&&count==x){
        return 1;
    }else{
        return Sum(wa, now+1, count, 1, x, y)+Sum(wa, now+1, count, 0, x, y);
    }
    
}

int main() {
    
    int x,y;
    while(cin>>x>>y){
        if(x==0&&y==0){
            break;
        }
        int ans = Sum(0, 0, 0, 1, x, y)+Sum(0, 0, 0, 0, x, y);
        cout<<ans<<endl;
    }
    
    return 0;
}