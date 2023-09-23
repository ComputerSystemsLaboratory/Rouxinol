
#include<iostream>
using namespace std;

int main(){
    int card[4][13],n,rank;
    char suit;
    cin>>n;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            card[i][j]=0;
        }
    }
            
    for(int i=0; i<n; i++){
        cin>>suit>>rank;
        if(suit=='S') card[0][rank-1]=1;
        if(suit=='H') card[1][rank-1]=1;
        if(suit=='C') card[2][rank-1]=1;
        if(suit=='D') card[3][rank-1]=1;
    }
    
    for(int i=0; i<4; i++ ){
        for(int j=0; j<13; j++){
            if ( card[i][j] == 1 ) continue;
            if(i==0) cout<<'S';
            if(i==1) cout<<'H';
            if(i==2) cout<<'C';
            if(i==3) cout<<'D';
            cout<<' '<<j+1<<endl;
        }
    }
    
    
}

