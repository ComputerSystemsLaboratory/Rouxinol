#include <bits/stdc++.h>
using namespace std;
int ans=0;
vector<vector<int>> search(int x,int y,vector<vector<int>> umi){
    umi[y][x]=-1;
    ans++;
    
    if(umi[y+1][x]!=-1){
        umi=search(x,y+1,umi);
    }
    if(umi[y][x-1]!=-1){
        umi=search(x-1,y,umi);
    }
    if(umi[y][x+1]!=-1){
        umi=search(x+1,y,umi);
    }
    if(umi[y-1][x]!=-1){
        umi=search(x,y-1,umi);
    }
    return umi;
}


int main(void){
    int h,w;
    char c;
    int x;
    int y;
    vector<vector<int>> umi;
    while(cin>>w>>h,h){
        vector<vector<int>> umi;
        vector<int> nul;
        for(int j=0;j<w+2;j++){
            nul.push_back(-1);
        }
        umi.push_back(nul);
        for(int i=0;i<h;i++){
            vector<int> tmp;
            tmp.push_back(-1);
            for(int j=0;j<w;j++){
                if(cin>>c,c=='@'){
                    tmp.push_back(1);
                    x=j+1;
                    y=i+1;
                }
                else if(c=='.'){
                    tmp.push_back(0);
                }
                else{
                    tmp.push_back(-1);
                }
            }
            tmp.push_back(-1);
            umi.push_back(tmp);
            getchar();
        }
        umi.push_back(nul);
        for(int i=0;i<h+2;i++){
            for(int j=0;j<w+2;j++){
                //cout<<umi[i][j]+1;
            }
            //cout<<endl;
        }
        search(x,y,umi);

        
        cout<<ans<<endl;
        ans=0;
    }
    
}