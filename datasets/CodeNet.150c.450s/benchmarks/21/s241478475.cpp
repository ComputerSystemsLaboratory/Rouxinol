#include<iostream>
using namespace std;

int main(){
    int x, y=1, i;

    cin >> x;

    for(i = 0; i < 3; i++){
        y = y * x;
    }

    cout << y << endl;
    return 0;
}