#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int W,H,x,y,r;
        scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
        if((x+r)>W ||(x-r)<0 || (y-r)<0 || (y+r)>H){
                printf("No\n");
        }else{
                printf("Yes\n");
        }
        return 0;
}