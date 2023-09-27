#include <iostream>
    using namespace std;
      
    int main() {
    int cards[4][13];
    for(int i=0; i<4; i++){
        for(int j=0; j<13 ;j++){
            cards[i][j]=0;
        }
    }
    int n;
    cin >> n ;
    for(int h=0; h<n ;h++){
        int num ;
        char mar ;
        cin>> mar >> num ;
        if(mar == 'S'){
            cards[0][num-1]=1;
        }
        if(mar == 'H'){
            cards[1][num-1]=1;
        }
        if(mar == 'C'){
            cards[2][num-1]=1;
        }
        if(mar == 'D'){
            cards[3][num-1]=1;
        }
    }
    for (int i=0; i<4 ; i++){
        for (int j=0 ; j<13 ; j++){
            if(cards[i][j] == 0){
                if(i == 0){cout<< "S " <<j+1 <<endl;}
                if(i == 1){cout<< "H " <<j+1 <<endl;}
                if(i == 2){cout<< "C " <<j+1 <<endl;}
                if(i == 3){cout<< "D " <<j+1 <<endl;}
            }
        }
    }
    return 0;
    }