#include <iostream>
using namespace std;

int main(void){
	int n,r,number;
	int a[4][13]={};
    char symbol;
    cin >> n;
    for(int i = 0; i<n;i++){
		cin >> symbol >> number;
        if(symbol=='S'){
            r = 0;
        }else if(symbol=='H'){
            r = 1;
        }else if(symbol=='C'){
            r = 2;
        }else if(symbol=='D'){
            r = 3;
        } 
        a[r][number-1]=1;
    }
    for(int i=0; i<4; i++){
		for(int j=0; j<13; j++){
            if(a[i][j]!=1){
                if(i==0)symbol='S';
		        if(i==1)symbol='H';
                if(i==2)symbol='C';
                if(i==3)symbol='D';
                cout <<symbol <<" " <<j+1 << endl;              
            }
        }
    }
    return 0;
}