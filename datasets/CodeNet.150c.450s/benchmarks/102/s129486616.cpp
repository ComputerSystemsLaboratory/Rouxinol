#include<iostream>
#include<cmath>
using namespace std;

char A[20][20];
bool V[20][20];
int count,H,W;
void check(int x,int y){
    if(0<=x-1){
        if(A[x-1][y]=='.'&&!V[x-1][y]){
            count++;
            V[x-1][y]=true;
            check(x-1,y);
        }
    }
    if(x+1<H){
        if(A[x+1][y]=='.'&&!V[x+1][y]){
            count++;
            V[x+1][y]=true;
            check(x+1,y);
        }
    }
   if(0<=y-1){
        if(A[x][y-1]=='.'&&!V[x][y-1]){
            count++;
            V[x][y-1]=true;
            check(x,y-1);
        }
    }   
    if(y+1<W){
        if(A[x][y+1]=='.'&&!V[x][y+1]){
            count++;
            V[x][y+1]=true;
            check(x,y+1);
        }
    }
    return;
    }
int main(){
    int x,y;
    count=1;
    while(true){
        cin>>W>>H;
        if(W==0&&H==0){
            break;
        }else{
            for(int i=0;i<H;i++){
                for(int j=0;j<W;j++){
                    cin>>A[i][j];
                    if(A[i][j]=='@'){
                        x=i;
                        y=j;
                    }
                }
            }
            for(int i=0;i<H;i++){
                for(int j=0;j<W;j++){
                    V[i][j]=false;
                    }
                }
            }
        check(x,y);
        cout<<count<<endl;
        count=1;
    }
    return 0;
}