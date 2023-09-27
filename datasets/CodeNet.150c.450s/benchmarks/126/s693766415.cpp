#include<iostream>

using namespace std;

int a,b,c,s,t,miti[20][20],memo[20][20],sum;

long long int zi(int x,int y){
        if(x==1&&y==1)return 1;

        if(memo[x][y]!=0)return memo[x][y];

        if(miti[x][y]==-1)return 0;

        if(x==1)return zi(x,y-1);
        if(y==1)return zi(x-1,y);

        int ans= zi(x-1,y)+zi(x,y-1);
        memo[x][y]=ans;
        return ans;
    }

int main(){
    while(1){

    cin >> a >> b;
    if(a==0&&b==0)break;

    cin >> c;
    for(int i=0;i<c;i++){
        cin >> s >> t;
        miti[s][t]=-1;
    }

    sum=zi(a,b);
    cout << sum << endl;
    sum=0;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            memo[i][j]=0;
            miti[i][j]=0;
        }
    }


    }
return 0;
}