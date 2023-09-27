#include <iostream>
using namespace std;
int main(){
    char suit[4]={'S','H','C','D'};
    int room[4][3][10];
    int num;
    int b,f,r,v;
    cin >> num;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                room[i][j][k]=0;
            }
        }
    }

    for(int i=0;i<num;i++){ 
        cin>>b>>f>>r>>v;
        room[b-1][f-1][r-1] += v;   
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<10;k++){
                cout<<" "<<room[i][j][k];
            }
            cout<<endl;
        }
        if(i!=3){
            cout<<"####################"<<endl;
        }
    }
    return 0;

}