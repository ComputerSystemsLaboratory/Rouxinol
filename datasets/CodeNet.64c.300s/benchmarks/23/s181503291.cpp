#include<iostream>
using namespace std;

int main(){
    int height, length, S, L;
    cin >> height >> length;
    S = height*length;
    L = 2*height + 2*length;
    cout << S << " " << L << endl;
    return 0;
}