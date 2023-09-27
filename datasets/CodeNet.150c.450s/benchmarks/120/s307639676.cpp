#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(vector<vector<int> > &);
void turn(vector<vector<int> >&,int);
int count(vector<vector<int> >&);
int H,W;
int main(){
    while(cin>>H>>W&&H){
        vector<vector<int> > map(W,vector<int>(H));
        for(int y=0;y<H;++y){
            for(int x=0;x<W;++x){
                int d;
                cin>>d;
                map[x][y]=d==1;
            }
        }
        cout<<func(map)<<endl;
    }
    return 0;
}

void turn(vector<vector<int> >&map,int num){
    for(int i=0;i<H;++i){
        if((1<<i)&num){
            for(int x=0;x<W;++x){
                map[x][i]=!map[x][i];
            }
        }
    }
}

int func(vector<vector<int> >&map){
    int ans=0;
    for(int i=0;i<(1<<H);++i){
        turn(map,i);
        ans = max(ans,count(map));
        turn(map,i);
    }
    return ans;
}

int count(vector<vector<int> >&map){
    int res = 0;
    for(int x=0;x<W;++x){
        int c = 0;
        for(int y=0;y<H;++y){
            c += map[x][y]?1:0;
        }
        res+=max(c,H-c);
    }
    return res;
}
