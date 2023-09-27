#include<bits/stdc++.h>
using namespace std;
char str[100][101];
int movex[4]={1,0,-1,0},movey[4]={0,1,0,-1},h,w;
void serch(int x,int y,char a)
{
    str[y][x]='0';
    for(int i=0;i<4;i++){
        int mx=x+movex[i],my=y+movey[i];
        if(a==str[my][mx]&&my>-1&&mx>-1&&my<h&&mx<w)serch(mx,my,a);
    }
}
int main()
{
    while(cin>>h>>w,h){
        for(int i=0;i<h;i++)cin>>str[i];
        int sum=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(str[i][j]!='0'){
                    serch(j,i,str[i][j]);
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}