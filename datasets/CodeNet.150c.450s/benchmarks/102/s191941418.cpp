#include<bits/stdc++.h>
using namespace std;

int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};

int main(){
    int w,h;
    while(cin>>w>>h,w){
        vector<string> s(h);
        for(int i=0;i<h;i++)
            cin>>s[i];
        int x,y;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                if(s[i][j]=='@')
                    x=j,y=i;
        vector<vector<int>> able(h,vector<int>(w,0));
        able[y][x]=1;
        for(int k=0;k<w*h;k++)
            for(int i=0;i<h;i++)
                for(int j=0;j<w;j++)
                    if(able[i][j]){
                        for(int r=0;r<4;r++)
                            if(0<=i+dy[r] && i+dy[r]<h && 0<=j+dx[r] && j+dx[r]<w && s[i+dy[r]][j+dx[r]]!='#')
                            able[i+dy[r]][j+dx[r]]=1;



                    }
        int res=0;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                res+=able[i][j];
        cout<<res<<endl;


    }


    return 0;
}