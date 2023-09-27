#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    cout << x/3600 << ":";
    x%=3600;
    cout << x/60 << ":";
    cout << x%60 << endl;
}
