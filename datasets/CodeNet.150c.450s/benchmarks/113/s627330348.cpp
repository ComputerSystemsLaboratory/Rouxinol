#include<iostream>
using namespace std;
int main(){
    int y;
    y = 0;
    while(true){
        int x;
        cin >> x;
        if(x == 0) break;
        y += 1;
        cout << "Case" << " " <<  y << ":" << " " << x << endl; 
    }
}
