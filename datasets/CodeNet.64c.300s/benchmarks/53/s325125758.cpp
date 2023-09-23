#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int x = 0;
    cin >> a >> b >> c; 
    for (int y = a; y <= b; ++y){
        if (c % y == 0){
            ++x;
        }
    }
    cout << x << endl;
    
    return 0;
}
