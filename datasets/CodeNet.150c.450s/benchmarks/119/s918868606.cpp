#include <bits/stdc++.h>

#define ll long long

using namespace std;

int w,h;

int f[100][100]={};

int solve(int i,int j,int num){
    if(i<0 || j < 0 || i >= h || j >= w )
        return 0;
    if(f[i][j]!=1)
        return 0;
    
    f[i][j]=num;
    solve(i-1,j-1,num);
    solve(i-1,j,num);
    solve(i-1,j+1,num);
    solve(i,j-1,num);
    solve(i,j+1,num);
    solve(i+1,j-1,num);
    solve(i+1,j,num);
    solve(i+1,j+1,num);
    return 0;
}


int main(){

    while(1){
        scanf("%d %d",&w,&h);
        if(w == 0 && h==0)break;

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                scanf("%d",&f[i][j]);
            }
        }
        int ans = 1;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(f[i][j]==1){
                    ans++;
                    solve(i,j,ans);
                }
            }
        }
        cout << ans-1 << endl;
    }

}
