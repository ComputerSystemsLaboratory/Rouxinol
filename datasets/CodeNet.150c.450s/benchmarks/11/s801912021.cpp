#include<iostream>
using namespace std;
int main(){
    int n,x;
    int card[5][14];
    cin>>n;
    char a;
    
    for(int i=1;i<=4;i++){
        for(int j=1;j<=13;j++){
            card[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        cin>>a>>x;
        if(a=='S'){
            card[1][x]=1;
        }
        else if(a=='H'){
            card[2][x]=1;
        }
        else if(a=='C'){
            card[3][x]=1;
        }
        else if(a=='D'){
            card[4][x]=1;
        }
    }
    for(int i=1;i<=4;i++){
        for(int j=1;j<=13;j++){
            if(card[i][j]==0){
                if(i==1){
                    cout<<'S'<<" "<<j<<endl;
                }
                else if(i==2){
                    cout<<'H'<<" "<<j<<endl;
                }
                else if(i==3){
                    cout<<'C'<<" "<<j<<endl;
                }
                else if(i==4){
                    cout<<'D'<<" "<<j<<endl;
                }
            }
        }
    }
    
    return 0;
}
