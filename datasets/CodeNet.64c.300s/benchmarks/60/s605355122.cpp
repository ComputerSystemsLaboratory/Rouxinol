#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x,y,n,warx,wary;
    while(cin>>x>>y){
        if(x==0&&y==0)break;
        int floor[100][100]={{0}},war[100][100]={{0}};
        floor[1][0]=1;
        cin>>n;
        while(n--){
            cin>>warx>>wary;
            war[warx][wary]=1;
        }
        for(int i=1;i<100;i++){
            for(int j=1;j<100;j++){
                if(war[i][j]!=1){
                    floor[i][j]=floor[i-1][j]+floor[i][j-1];
                }
            }
        }
        cout<<floor[x][y]<<endl;
    }

    return 0;
}