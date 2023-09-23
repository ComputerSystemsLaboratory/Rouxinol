#include<iostream>
#include<algorithm>
#include<set>
#include <string>
#include<stdio.h>

using namespace std;

int main(){
    int n,y,m,d,sum;

    cin>>n;

    for(int i=0; i<n; i++){
            sum=0;
            cin>>y>>m>>d;

            if(y%3==0 || m%2==1){
                sum += 20-d;
            }else{
                sum += 19-d;
            }

            for(int j=m+1; j<=10; j++ ){
                if(y%3==0 || j%2==1){
                    sum+=20;
                }else{
                    sum+=19;
                }
            }

            for(int j=y+1; j<1000; j++){
                if(j%3==0){
                    sum+=200;
                }else{
                    sum+=195;
                }
            }
            printf("%d\n", sum+1);
    }
    return 0;
}

