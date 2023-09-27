#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={-1,-1,-1,0,0,1,1,1};

    int w,h;
void dfs(int i,int j,vector<vector<int>>& x){
        x[i][j]=0;
        for(int r=0;r<8;r++)
            if(0<=i+dx[r] && i+dx[r]<h && 0<=j+dy[r] && j+dy[r]<w && x[i+dx[r]][j+dy[r]])
                dfs(i+dx[r],j+dy[r],x);



}
int main(){
    while(cin>>w>>h,w){
        vector<vector<int>> x(h,vector<int>(w,0));
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                cin>>x[i][j];
        int cnt=0;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++){
                if(x[i][j]){
                    cnt++;
                    dfs(i,j,x);


                }




            }
        cout<<cnt<<endl;



    }


    return 0;
}