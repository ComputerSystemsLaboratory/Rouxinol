#include<iostream>
using namespace std;

int main(){
    int total, number;
    char mark;
    int card[4][13] = {{}};
    
    cin >> total;
    for(int i = 0; i < total; i++){
    cin >> mark >> number;
    switch(mark){
        case 'S' :
        card[0][number-1] = 1;
        break;
        case 'H' :
        card[1][number-1] = 1;
        break;
        case 'C' :
        card[2][number-1] = 1;
        break;
        case 'D' :
        card[3][number-1] = 1;
        break;
        }
    }
    
    for(int i = 0; i < 52; i++){
        switch(i/13){
            case 0 :
        if(card[0][i%13] == 0) cout << 'S' << " " << i%13+1 << endl;
        break;
        case 1 :
        if(card[1][i%13] == 0) cout << 'H' << " " << i%13+1 << endl;
        break;
        case 2 :
        if(card[2][i%13] == 0) cout << 'C' << " " << i%13+1 << endl;
        break;
        case 3 :
        if(card[3][i%13] == 0) cout << 'D' << " " << i%13+1 << endl;
        break;
        }
        
    }
    return 0;
}
