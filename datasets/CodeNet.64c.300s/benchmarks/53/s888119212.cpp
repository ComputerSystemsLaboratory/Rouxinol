#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int y = 0;
    cin >> a; 
    cin >> b;
    cin >> c;
    for (int x = a; x <= b; ++x){
        if (c % x == 0){
            ++y;
        }
    }
    cout << y << endl;
    
    return 0;
}
