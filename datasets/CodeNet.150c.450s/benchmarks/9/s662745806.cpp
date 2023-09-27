#include<iostream>
#include<string>
using namespace std;

int main(){

    string card;
    int m,h;

    while(1){
        cin>>card;
        if(card=="-")break;
        cin>>m;

        for(int i=0;i<m;i++){
            cin>>h;
            for(int j=0;j<h;j++){
                card += card[0];
                card.erase(0,1);
//                cout<<card<<endl;
            }
        }
        cout<<card<<endl;
    }


    return 0;
}
