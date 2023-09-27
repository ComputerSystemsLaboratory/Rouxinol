#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct{
    char value;
    int flag;
}sq;
sq field[102][102];
int dir[]={-1,1};
void tick(int i,int j,int n,int m,char c){
    for(int d=0;d<2;d++){
        if(field[i+dir[d]][j].value==c&&field[i+dir[d]][j].flag==0){
            field[i+dir[d]][j].flag=1;
            tick(i+dir[d],j,n,m,c);
        }
        if(field[i][j+dir[d]].value==c&&field[i][j+dir[d]].flag==0){
            field[i][j+dir[d]].flag=1;
            tick(i,j+dir[d],n,m,c);
        }
    }
}
int main(void){
    int n,m,pond=0;
    cin>>n>>m;
    while(n!=0){
        for(int i=1;i<n+1;i++) for(int j=1;j<m+1;j++){
            cin>>field[i][j].value;
            field[i][j].flag=0;
        }
        for(int i=1;i<n+1;i++) for(int j=1;j<m+1;j++){
            if(field[i][j].flag==0){
                tick(i,j,n,m,field[i][j].value);
                pond++;
            }
        }
        cout<<pond<<endl;
        for(int i=0;i<102;i++) for(int j=0;j<102;j++){
            field[i][j].value='-';
            field[i][j].flag=0;
        }
        pond=0;
        cin>>n>>m;
    }
    return 0;
}
