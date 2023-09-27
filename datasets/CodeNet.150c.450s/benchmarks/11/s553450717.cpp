#include <iostream>
using namespace std;

int main(){
    int n,rank;
    char mark;
    int card[4][13]={};
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mark>>rank;
        switch(int(mark)){
                case 'S':card[0][rank-1]=true;
                    break;
                case 'H':card[1][rank-1]=true;
                    break;
                case 'C':card[2][rank-1]=true;
                    break;
                case 'D':card[3][rank-1]=true;
                    break;
        }
    }
    
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(card[i][j]==false){
                switch(i){
                    case 0:cout<<"S "<<j+1<<endl;
                        break;
                    case 1:cout<<"H "<<j+1<<endl;
                        break;
                    case 2:cout<<"C "<<j+1<<endl;
                        break;
                    case 3:cout<<"D "<<j+1<<endl;
                        break;
                }
            }
        }
    }
    
    return 0;
}

