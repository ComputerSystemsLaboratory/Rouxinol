#include <bits/stdc++.h>

using namespace std;

#define MN 10001

int arr[MN];

int main(){
    int n;
    cin >>n;
    for(int i=1;i<MN;i++){
        int r=i*i;
        if(r>n)break;
        for(int j=1;j<=i;j++){
            int r1=r+j*j;
            if(r1>n)break;
            for(int k=1;k<=j;k++){
                int r2=r1+k*k+i*j+j*k+k*i;
                if(r2<=n){
                    arr[r2]+=6;
                    if(i==k||k==j||i==j){
                        arr[r2]-=3;
                        if(i==k&&j==i){
                            arr[r2]-=2;
                        }
                    }

                }else break;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout <<arr[i]<<endl;

}
