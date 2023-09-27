#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> &yard,char key,int x,int y){
    yard[y][x]='.';
    //cout<<y<<","<<x<<endl;
    if(yard[y+1][x]==key){
        solve(yard,key,x,y+1);
    }
    if(yard[y-1][x]==key){
        solve(yard,key,x,y-1);
    }
    if(yard[y][x+1]==key){
        solve(yard,key,x+1,y);
    }
    if(yard[y][x-1]==key){
        solve(yard,key,x-1,y);
    }
    return;
}

int main(void){
    // Your code here!
    int h,w;
    cin>>h>>w;
    while(1){
        int num=0;
        if(h==0&&w==0) break;
        vector<string> yard(h+2,string(w+2,'.'));
        for(int i=1;i<=h;i++){
            cin>>yard[i];
            yard[i]="."+yard[i]+".";
        }
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                if(yard[i][j]!='.'){
                    char key=yard[i][j];
                    solve(yard,key,j,i);
                    num++;
                }
            }
        }
        cout<<num<<endl;
        cin>>h>>w;
    }
    
    
}