#include <iostream>

using namespace std;

void swap(int& x, int& y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}


int main(){
    int x,y;
    while(true){
        cin >> x >> y;
        if(!x && !y)break;
        if(x>y)swap(x,y);
        cout << x << " " << y << endl;
    }
    return 0;
}
