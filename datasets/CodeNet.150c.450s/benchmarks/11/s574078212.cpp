#include <iostream>
using namespace std;
int main(){
    char suit;
    bool cards[4][14];
    int a,b;
    
    for(int i=0;i<4;i++)
        for(int j=1;j<=13;j++)
            cards[i][j]=0;
            
    cin>>a;
    for(int x=0;x<a;x++){
    cin>>suit>>b;
    if(suit=='S')cards[0][b]=1;
    if(suit=='H')cards[1][b]=1;
    if(suit=='C')cards[2][b]=1;
    if(suit=='D')cards[3][b]=1;}
    
    for(int i=0;i<4;i++){
        for(int j=1;j<=13;j++){
            if(cards[i][j])continue;
            if(i==0)suit='S';
            if(i==1)suit='H';
            if(i==2)suit='C';
            if(i==3)suit='D';
            cout<<suit<<" "<<j<<endl;}
    }
            
            return 0;}
