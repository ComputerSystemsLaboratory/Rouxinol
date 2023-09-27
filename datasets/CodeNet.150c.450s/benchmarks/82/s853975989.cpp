#include<bits/stdc++.h>
using namespace std;
struct Dice{
    int lab[6];
    void in(){
        for(int i=0;i<6;i++){
            cin >> lab[i];
        }
    }
    void roll(char a){
        if(a=='S'){
            int stock;
            stock=lab[0];
            lab[0]=lab[4];
            lab[4]=lab[5];
            lab[5]=lab[1];
            lab[1]=stock;
        }
        if(a=='N'){
            int stock;
            stock=lab[0];
            lab[0]=lab[1];
            lab[1]=lab[5];
            lab[5]=lab[4];
            lab[4]=stock;
        }
        if(a=='W'){
            int stock;
            stock=lab[0];
            lab[0]=lab[2];
            lab[2]=lab[5];
            lab[5]=lab[3];
            lab[3]=stock;
        }
        if(a=='E'){
            int stock;
            stock=lab[0];
            lab[0]=lab[3];
            lab[3]=lab[5];
            lab[5]=lab[2];
            lab[2]=stock;
        }
        if(a=='R'){
            roll('N');roll('E');roll('S');
        }
        if(a=='L'){
            roll('N');roll('W');roll('S');
        }
    }
    
    int top(){
        return lab[0];
    }
    void right(int a,int b){
        int i;
        for(i=0;i<6;i++){
            if(lab[i]==a){
                break;
            }
        }
            
        if(i==1){
            roll('N');
        }
        if(i==2){
            roll('W');
        }
        if(i==3){
            roll('E');
        }
        if(i==4){
            roll('S');
        }
        if(i==5){
            roll('N');roll('N');
        }
            
        for(int j=1;j<5;j++){
            roll('L');
            
            if(lab[1]==b){
                break;
            }
        }
        return;
    }
};

int main() {
    Dice d;
    d.in();
    int a,b;
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a >> b;
        d.right(a,b);
        cout << d.lab[2] << endl;
    }
}
