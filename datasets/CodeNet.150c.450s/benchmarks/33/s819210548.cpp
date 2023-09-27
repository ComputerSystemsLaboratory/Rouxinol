#include<iostream>
using namespace std;

int  tax(int price, int rate){
    double taxed=price*(100+rate)/100.0;
    return static_cast<int>(taxed);
}

int max(int x, int y){
    if(x<y) return y;
    else return x;
}

int main(){
    int x, y, s;
    int maximum = 0;
    cin >> x >> y >> s;
    while(!(x==0 && y==0 && s==0)){
        maximum=0;
        for(int i = 1; i < s; ++i){
            for(int j = i; j < s; ++j){
                if(tax(i,x) + tax(j,x) == s){
                    maximum = max(maximum, tax(i,y)+tax(j,y));
                }
            }
        }
        cout<<maximum<<"\n";
        cin >> x >> y >> s;
    }
}