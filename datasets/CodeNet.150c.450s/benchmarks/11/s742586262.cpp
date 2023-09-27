#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,num,i,j,idx;
    string c;
    int cards[4][13];
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            cards[i][j]=0;  
        }
    }
    cin>> num;
    for(i=0;i<num;i++){
        cin>> c>> n;
        n--;
        if(c=="S"){
            idx=0;
        }else if(c=="H"){
            idx=1;
        }else if(c=="C"){
            idx=2;
        }else if(c=="D"){
            idx=3;
        }else{
        }
        // cout<< idx<<" "<<n<< endl;
        cards[idx][n]= 1;
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(cards[i][j]==0){
                switch(i){
                    case 0:
                        c="S";
                        break;
                    case 1:
                        c="H";
                        break;
                    case 2:
                        c="C";
                        break;
                    case 3:
                        c="D";
                        break;
                }
                cout<< c<< " "<< j+1<< endl;
            }
        }
   }
    return 0;
}