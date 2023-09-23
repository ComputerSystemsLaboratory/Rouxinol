#include<iostream>
using namespace std;

#define S 0
#define H 1
#define C 2
#define D 3

int main(){
    int n;
    int card[4][13];
    char type;
    int num;

    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            card[i][j] = 0;
        }
    }
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> type >> num;
        switch(type){
        case 'S':{
            card[S][num-1] = 1;
            break;}
        case 'H':{
            card[H][num-1] = 1;
            break;}
        case 'C':{
            card[C][num-1] = 1;
            break;}
        case 'D':{
            card[D][num-1] = 1;
            break;}
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            if(card[i][j]==0){
                if(i==S){
                    cout << "S " << j+1 << endl;
                }else if(i==H){
                    cout << "H " << j+1 << endl;
                }else if(i==C){
                    cout << "C " << j+1 << endl;
                }else{
                    cout << "D " << j+1 << endl;
                }
            }
        }
    }
    
    return 0;
}