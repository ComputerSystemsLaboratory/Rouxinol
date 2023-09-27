#include<iostream>
using namespace std;
int main(void)
{
    int noth,easu,n,i2,x,y,j1;
    int road[18][18];
    while(1){
        cin>>easu>>noth;
        if(easu==0&&noth==0)break;
        j1=0;
        cin>>n;
        for(int i=1;i<=easu;i++){
            for(int j=1;j<=noth;j++){
                road[i][j]=-1;
            }
        }
        for(int i=0;i<n;i++){
            cin>>x>>y;
            road[x][y]=0;
        }
        for(int i=1;i<=easu;i++){
            i2=0;
            for(int j=1;j<=noth;j++){
                if(i2==1){
                    road[i][j]=0;
                }
                else if(j1==1&&j==1)road[i][j]=0;
                else if(road[i][j]==0&&i==1)i2=1;
                else if(road[i][j]==0&&j==1)j1=1;
                else if(road[i][j]==-1&&(i==1||j==1))road[i][j]=1;
                else if(road[i][j]==-1)road[i][j]=road[i-1][j]+road[i][j-1];
               // cout<<road[i][j]<<" ";
            }
           // cout<<"\n";
        }
        cout<<road[easu][noth]<<"\n";
    }
}