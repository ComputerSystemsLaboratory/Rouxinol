#include <iostream>
using namespace std;
int main(void){
    int n,x,i,j,cards[4][13] = {{0}};
    char ch;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ch >> x;
        if(ch=='S'){
            cards[0][x-1]=1;
        }else if(ch=='H'){
            cards[1][x-1]=1;
        }else if(ch=='C'){
            cards[2][x-1]=1;
        }else if(ch=='D'){
            cards[3][x-1]=1; 
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(cards[i][j]==0){
                if(i==0){
                    cout << "S"<< " " <<j+1;
                    cout << endl;
                }else if(i==1){
                    cout << "H" << " " << j+1;
                    cout << endl;
                }else if(i==2){
                    cout << "C" << " " << j+1;
                    cout << endl;
                }else if(i==3){
                    cout << "D" << " " << j+1;
                    cout << endl;
                }
            }
        }
    }
}

