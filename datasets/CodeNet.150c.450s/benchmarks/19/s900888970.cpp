#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int x,y;
                scanf("%d %d",&x,&y);
                if(x==0 && y==0){
                        break;
                }else{
                        if(x>y){
                                printf("%d %d\n",y,x);
                        }else{
                                printf("%d %d\n",x,y);
                        }
                }
        }
        return 0;
}