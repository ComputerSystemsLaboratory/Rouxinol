#include<bits/stdc++.h>

using namespace std;
int memo[10000][10000];
int road[10000][10000];
int ho=0,le=0;
int c=0,d=0,e=0,f=0;
int miti(int a,int b){
    if(memo[a][b]==-1)return 0;
    if(a==1&&b==1)return 1;
    if(a==1)memo[a][b]=miti(a,b-1);
    else if(b==1)memo[a][b]=miti(a-1,b);
    else if(memo[a][b]==0)
        memo[a][b]=miti(a-1,b)+miti(a,b-1);
        return memo[a][b];
}
int main(){
    while(1){
    cin >> c >> d;
    if(c==0&&d==0)break;
    cin >> e;
    fill(memo[0],memo[c+d]+d+c,0);
    for(int i=0;i<e;i++){
        cin >> ho >> le;
        memo[ho][le]=-1;
    }
    f=miti(c,d);

    cout << f << endl;
    }
return 0;
}