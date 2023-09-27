#include <iostream>
using namespace std;

int X,Y,S;

int tax(double rate,int price){
    return price*(100+rate)/100;
}

int solve(){
    int maximum = 0;
    for(int i=1; i<S; ++i){
        for(int j=1; j<S; ++j){
            if(tax(X,i)+tax(X,j) == S)
                maximum = max(maximum, tax(Y,i)+tax(Y,j));
        }
    }
    return maximum;
}

int main(){
    while(cin >> X >> Y >> S && X>0){
        cout << solve() << endl;
    }
}