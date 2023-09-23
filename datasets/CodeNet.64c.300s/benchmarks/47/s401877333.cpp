#include <algorithm>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int i,IMAX=0,num[100]={0},a,ans=0,max=0;
    while(cin >> a){
        num[a-1]++;
        IMAX++;
    }
    for(i=0;i<IMAX;i++){
        if(max<num[i]){
            max=num[i];
            ans=i+1;
        }
    }
    cout << ans << endl;
    for(i=ans;i<IMAX;i++){
        if(max==num[i]) cout << i+1 << endl;
    }

    return 0;
}