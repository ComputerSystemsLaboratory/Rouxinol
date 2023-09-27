#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
#include <math.h>
#include <sstream>

using namespace std;
int main(void){
    while(true){
        int n;
        cin>>n;
        if(n==0)break;
        int inx,iny;
        bool  takara[21][21]={0};
        for(int i=0;i<n;i++){
            cin>>inx>>iny;
            takara[inx][iny]=1;
        }
        int k,cnt=0;
        cin>>k;
        int x=10,y=10,oldx=10,oldy=10;
        string houi;
        int idou;
        for(int i=0;i<k;i++){
            oldx=x;oldy=y;
            cin>>houi>>idou;
            if(houi=="N"){
                for(int s=0;s<idou;s++){
                    y++;
                    if(takara[x][y]==1){
                        takara[x][y]=0;
                        cnt++;
                    }
                }
            }else if(houi=="S"){
                for(int s=0;s<idou;s++){
                    y--;
                    if(takara[x][y]==1){
                        takara[x][y]=0;
                        cnt++;
                    }
                }
            }else if(houi=="E"){
                for(int s=0;s<idou;s++){
                    x++;
                    if(takara[x][y]==1){
                        takara[x][y]=0;
                        cnt++;
                    }
                }
            }else if(houi=="W"){
                for(int s=0;s<idou;s++){
                    x--;
                    if(takara[x][y]==1){
                        takara[x][y]=0;
                        cnt++;
                    }
                }
            }
            
        }
        if(cnt==n)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}