#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    0 <= a,b,c <= 100;
    if(a < b && b < c){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}
