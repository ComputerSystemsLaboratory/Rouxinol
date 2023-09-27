#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    bool cards[4][13] ={
        {false}
    };
    int rank;
    char suit;
    for(int i = 0; i < n; i++){
        
        cin >> suit >> rank;
        
              if(suit=='S'){
            cards[0][rank - 1] = true;
            
        }else if(suit=='H'){
            cards[1][rank - 1] = true;
            
        }else if(suit=='C'){
            cards[2][rank - 1] = true;
            
        }else if(suit=='D'){
            cards[3][rank - 1] = true;
            
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(cards[i][j]==false){
                if(i==0) cout << "S " << j + 1 << endl;
                if(i==1) cout << "H " << j + 1 << endl;
                if(i==2) cout << "C " << j + 1 << endl;
                if(i==3) cout << "D " << j + 1 << endl;
            }
        }
    }
}