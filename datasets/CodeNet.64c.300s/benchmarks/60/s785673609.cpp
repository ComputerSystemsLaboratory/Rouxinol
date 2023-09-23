#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    for(;;){
        int a,b,n,m=0;
        int x;
        int y;
        int map[50][50]={0};
        cin>>a>>b;
        if(a==0&&b==0)break;
        cin>>n;
        map[0][0]=1;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            map[y-1][x-1]=-1;
        }
        for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                if(i==0&&j==0);
                else if(i==0){
                    if(map[0][j]==-1)map[0][j]=0;
                    else map[0][j]=map[0][j-1];

                }
                else if(j==0){
                    if(map[i][0]==-1)map[i][0]=0;
                    else map[i][0]=map[i-1][0];
                }
                else {
                    if(map[i][j]==-1)map[i][j]=0;
                    else map[i][j]=map[i][j-1]+map[i-1][j];
                    }
            }
        }
       /* for(int i=0;i<b;i++){
            for(int j=0;j<a;j++){
                printf("%3d",map[i][j]);
            }
            cout<<endl;
        }*/
        cout<<map[b-1][a-1]<<endl;



    }
	return 0;
}