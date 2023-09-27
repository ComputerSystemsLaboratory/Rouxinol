#include <bits/stdc++.h>
using namespace std ;
#define An setprecision(16) 
int main(){
    int N;
    cin >> N;
    int ans[N+1];
    for(int i=0;i<=N;i++)ans[i]=0;
    for(int i=1;i<101;i++){
        for(int j=1;j<101;j++){
            for(int k=1;k<101;k++){
                int v=i*i+j*j+k*k+i*j+j*k+k*i;
                if(v<=N){
                    ans[v]++;
                }
            }
        }
    }
    for(int i=1;i<=N;i++)cout << ans[i] << endl;
}