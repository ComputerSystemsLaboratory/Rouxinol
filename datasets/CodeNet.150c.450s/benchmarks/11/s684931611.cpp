#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n;
    int a[4][13];
    int i,j;
    string t="";
    int t1,t2;
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 13; j++){
            a[i][j]=0;
        }
    }

    cin >> n;
    for (i = 0; i < n;i++){
        cin >> t >> t2;
        if (t =="S"){
            t1=0;
        }else if(t=="H"){
            t1=1;
        }else if(t=="C"){
            t1=2;
        }else if(t=="D"){
            t1=3;
        }
        a[t1][t2-1]=1;
    }
    
    t="";
    for (i = 0; i < 4; i++){
        for (j = 0; j < 13; j++){
            if (a[i][j]==0){
                if (i ==0){
                    t="S";
                }else if(i==1){
                    t="H";
                }else if(i==2){
                    t="C";
                }else if(i==3){
                    t="D";
                }
                cout << t << " " << j+1 << endl;
                t ="";
            }
        }
    }
    
    return 0;
}