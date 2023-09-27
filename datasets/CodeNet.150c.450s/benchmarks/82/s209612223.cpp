#include <iostream>
#include <string>
using namespace std;

class dice{
    public:
    int t[7][6];

    dice(){ //??????????????????????????????
    	
    }

    void ready(){
        t[1][1]=t[5][0], t[1][2]=t[4][0], t[1][3]=t[2][0], t[1][4]=t[3][0], t[1][5]=t[5][0];
        t[2][1]=t[1][0], t[2][2]=t[4][0], t[2][3]=t[6][0], t[2][4]=t[3][0], t[2][5]=t[1][0];
        t[3][1]=t[1][0], t[3][2]=t[2][0], t[3][3]=t[6][0], t[3][4]=t[5][0], t[3][5]=t[1][0];
        t[4][1]=t[1][0], t[4][2]=t[5][0], t[4][3]=t[6][0], t[4][4]=t[2][0], t[4][5]=t[1][0];
        t[5][1]=t[1][0], t[5][2]=t[3][0], t[5][3]=t[6][0], t[5][4]=t[4][0], t[5][5]=t[1][0];
        t[6][1]=t[2][0], t[6][2]=t[4][0], t[6][3]=t[5][0], t[6][4]=t[3][0], t[6][5]=t[2][0];
    }
    
};

int main(){
    dice D2;
    for(int i=1; i<7; i++){
        cin >> D2.t[i][0];
    }
    D2.ready();
    
    int n,top,front,table,cher;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> top >> front;

        for(int i=1; i<7; i++){
            if(D2.t[i][0]==top)table=i;     
        }

        for(int i=1; i<5; i++){
            if(D2.t[table][i]==front)cher=i+1;
        }

        cout << D2.t[table][cher] << endl;
    }

    return 0;
}