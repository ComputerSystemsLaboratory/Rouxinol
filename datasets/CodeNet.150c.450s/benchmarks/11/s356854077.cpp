#include<iostream>
using namespace std;
int main(){
    
    int cards[4][14];
    for(int i=0; i<4; i+=1){
        for(int j=0; j<14; j+=1){
            cards[i][j] = 0;
        }
    }
    
    int n, b;
    char a;
    cin >> n;
    
    for(int count=1; count<=n; count+=1){
        cin >> a;
        int i;
        if(a=='S') i=0;
        else if(a=='H') i=1;
        else if(a=='C') i=2;
        else if(a=='D') i=3;
        
        cin >> b;
        int j=b;
        
        cards[i][j] = 1;
    }
    
    char marks[4] = {'S', 'H', 'C', 'D'};
    
    for(int i=0; i<4; i+=1){
        for(int j=1; j<14; j+=1){
            if(cards[i][j] == 0){
                cout << marks[i] << " " << j << endl;
            }
        }
    }
    
    return 0;
    
}

