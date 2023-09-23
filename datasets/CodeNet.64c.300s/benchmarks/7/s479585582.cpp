#include <iostream>
using namespace std;
int main(){
    char suit[4]={'S','H','C','D'};
    int card[4][13];
    int num;
    char card_suit;
    int card_num;
    cin >> num;
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            card[i][j]=0;
        }
    }

    for(int i=0;i<num;i++){
        cin>>card_suit>>card_num;
        for(int j=0;j<4;j++){
            if(card_suit==suit[j]){
                card[j][card_num-1]=1;
                break;
            }
        }   
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(card[i][j]==0){
                cout<<suit[i]<<" "<<j+1<<endl;
            }
        }
    }


    return 0;

}