#include <iostream>
#include <algorithm>
using namespace std;

int X,Y,S;
int tax(int rate,int price){
    return((int)(price*(float)(100+rate)/100));
}
int main(){
    while(cin >>X>>Y>>S && X>0){
        int maximum=0;
        for(int i=1;i<S;i++){
            for(int j=i;j<S;j++){
                if(tax(X,i)+tax(X,j)==S){
                    if(maximum<tax(Y,i)+tax(Y,j)){
                        maximum=tax(Y,i)+tax(Y,j);
                    }
                }
            }
        }
        cout << maximum << endl;
    }
}

