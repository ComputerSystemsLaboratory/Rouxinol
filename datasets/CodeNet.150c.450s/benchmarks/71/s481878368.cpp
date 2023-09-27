#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    int n=0,cnt=0;
    if(scanf("%d",&n)==EOF)break;
    for(int i=0;i<10;i++){
        for(int r=0;r<10;r++){
            for(int l=0;l<10;l++){
                for(int k=0;k<10;k++){
                    if(n==i+r+l+k)cnt++;
                }
            }
        }
    }
    cout << cnt <<endl;
    }

    return 0;
}