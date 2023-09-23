#include<iostream>
using namespace std;
int main(){
    int n,a;
    char suto;
    bool cards[4][13];
    for(int i=0;i<=3;i++){
        for(int k=0;k<=12;k++){
            cards[i][k]=false;
        }
    }
    cin  >>n;
    for(int i=0;i<=n;i++){
        cin >>suto >>a;
        if (suto=='S'){
            cards[0][a-1]=true;
        }
        else if(suto=='H'){
            cards[1][a-1]=true;
        }
        else if(suto=='C'){
            cards[2][a-1]=true;
        }
        else if(suto=='D'){
            cards[3][a-1]=true;
        }
    
    }
    for(int i=0;i<=3;i++){
        for(int k=0;k<=12;k++){
            if (cards[i][k]==false){
                if (i==0){
                    cout<<"S"<<" "<<k+1<<endl;
                }
                else if(i==1){
                    cout<<"H"<<" "<<k+1<<endl;
                }
                else if(i==2){
                   cout<<"C"<<" "<<k+1<<endl;
                }
                else if(i==3){
                    cout<<"D"<<" "<<k+1<<endl;
                }
            }
        }
    }
 
    
    return 0;
}


