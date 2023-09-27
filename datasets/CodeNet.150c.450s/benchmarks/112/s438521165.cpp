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
    int n,m;
    char hen[100][2],c;
    while(1){
    scanf("%d\n",&n);
    if(n==0) break;
    for(int i=0;i<n;i++){
        scanf("%c %c\n",&hen[i][0],&hen[i][1]);
    }
    
    scanf("%d\n",&m);
    
    for(int i=0;i<m;i++){
        scanf("%c\n",&c);
        for(int j=0;j<n;j++){
            if(c==hen[j][0]){
                c=hen[j][1];
                break;
            }
        }
        printf("%c",c);
    }
    
    printf("\n");
    }
    return 0;
    
}