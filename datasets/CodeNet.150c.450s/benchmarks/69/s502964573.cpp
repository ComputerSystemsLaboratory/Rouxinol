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
    int n,b,B=0,C=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        B=0;C=0;
        for(int j=0;j<10;j++){
            scanf("%d",&b);
            if(min(B,C)<b){
                if((B>C && B<b) || C>b)B=b;
                else C=b;
            }else{
                B=11;C=11;
            }
        }
        if(B==10 || C==10)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}