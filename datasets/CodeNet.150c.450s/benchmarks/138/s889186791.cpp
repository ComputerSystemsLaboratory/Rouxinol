#include <iostream>

int main(){
    using namespace std;
    
    bool dotti;
    dotti = true;
    int x,y;
    cin >> x >> y;
    while(x != 0&&y != 0){
        if(dotti)x%=y;
        else y%=x;
        dotti = !dotti;
    }
    cout << x + y<< endl;
}