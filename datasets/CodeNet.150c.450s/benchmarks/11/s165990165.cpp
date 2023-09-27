#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int card[5][14];
    
    for(int i=1;i<=4;i++){
        for (int j=1;j<=13;j++){
            card[i][j]=0;
        }
    }
    
    for(int i=1;i<=n;i++){
        char m;
        int a;
        cin >> m >> a;
        if(m=='S'){
            card[1][a]=1;
        }
        else if(m=='H'){
            card[2][a]=1;
        }
        else if(m=='C'){
            card[3][a]=1;
        }
        else if(m=='D'){
            card[4][a]=1;
        }
    }
    
    for(int i=1;i<=13;i++){
        if(card[1][i]!=1){
            cout << "S"<< " "<< i << endl;
        }
    }
    for(int i=1;i<=13;i++){
     if(card[2][i]!=1){
            cout << "H"<<" " << i << endl;
        }
    }
    for(int i=1;i<=13;i++){
        if(card[3][i]!=1){
            cout << "C"<<" " << i << endl;
        }
    }
    for(int i=1;i<=13;i++){
        if(card[4][i]!=1){
            cout << "D"<<" " << i << endl;
        }
    }
    return 0;
}
