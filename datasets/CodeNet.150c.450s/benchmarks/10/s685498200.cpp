#include<iostream>
using namespace std;

int main(){
    int house[5][4][11];
    
    //reset for house
    for(int a=0; a<5; a+=1){
        for(int i=0; i<4; i+=1){
            for(int j=0; j<11 ;j+=1){
                house[a][i][j] = 0;
            }
        }
    }
    
    int c,b,f,r,v;
    
    cin >> c;
    for(int n=1; n<=c; n+=1){
        cin >> b >> f >> r >> v;
        house[b][f][r] += v;
    }
    
    for(int a=1; a<5; a+=1){
        for(int i=1; i<4; i+=1){
            for(int j=1; j<11; j+=1){
                cout << " " << house[a][i][j];
            }
            cout << endl;
        }
        if(a==4) break;
        cout << "####################" << endl;
    }
    
    return 0;
}
