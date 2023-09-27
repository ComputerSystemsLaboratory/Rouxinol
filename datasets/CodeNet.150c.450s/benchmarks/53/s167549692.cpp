#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n; cin >> n; 
    cout << n << ":";
    int div=2;
    int sor = n;
    while(n!=1){
        if(n%div==0){
            cout << " " << div;
            n/=div;
        }
        else
            div++;
        if(div>(int)(sqrt(sor))){
            cout << " " << n;
            break;
        }
    }
    cout << endl;
}
