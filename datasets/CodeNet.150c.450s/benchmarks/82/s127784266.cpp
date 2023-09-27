#include <iostream>
using namespace std;

int diceProduct(int d1, int d2);

int diceProduct(int d1, int d2){
    int tmp;
    bool modifier = false;
    int tmpProduct;
    
    if(2 < d1){
        d1 = 5 - d1;
        modifier = !modifier;
    }
    
    if(2 < d2){
        d2 = 5 - d2;
        modifier = !modifier;
    }
    
    if(d1 == d2) return 0;
    
    if(d2 < d1){
        tmp = d1;
        d1 = d2;
        d2 = tmp;
        
        modifier = !modifier;
    }
    
    if(d1 == 0 && d2 == 1) tmpProduct = 2;
    if(d1 == 1 && d2 == 2) tmpProduct = 0;
    if(d1 == 0 && d2 == 2) tmpProduct = 4;
    
    if(!modifier) return tmpProduct;
    else return (5 - tmpProduct);
}

int main(void){
    int input[6];
    int i;
    int q;
    int top, south;
    int topIndex, southIndex, eastIndex;
    for(i = 0; i < 6; i++){
        cin >> input[i];
    }
    
    cin >> q;
    
    for (i = 0; i < q; i++){
        cin >> top >> south;
        for(topIndex = 0; topIndex < 6; topIndex++){
            if(input[topIndex] == top) break;
        }
        
        for(southIndex = 0; southIndex < 6; southIndex++){
            if(input[southIndex] == south) break;
        }
        eastIndex = diceProduct(topIndex, southIndex);
        cout << input[eastIndex] << endl;
    }

    return 0;
}