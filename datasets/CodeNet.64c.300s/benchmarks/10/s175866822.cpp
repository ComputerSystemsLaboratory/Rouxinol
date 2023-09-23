#include <iostream>
using namespace std;

int main(){
    int x,y,work;
    cin >> x >> y;
    while(!(x == 0 && y == 0)){
        if(x > y){
            work = x;
            x = y;
            y = work;
        }
        cout << x << " " << y << endl;
        cin >> x >> y;
    }
    return 0;
}