#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(void){
    int e;
    while(1){
        cin>>e;
        if(e==0)break;
        int ans=1000000000;
        for(int i=pow(e,0.334);i>=0;i--){
            for(int j=pow(e,0.5);j>=0;j--){
                if(e-i*i*i-j*j>=0){
                    ans=min(ans,i+j+(e-i*i*i-j*j));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

