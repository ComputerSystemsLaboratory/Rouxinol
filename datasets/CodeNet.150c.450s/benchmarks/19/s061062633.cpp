#include<iostream>
using namespace std;
int main(){
    int x, y;
    int i = 1;
    
    while(i <= 3000){
        cin >> x >> y;
        if((x == 0) && (y == 0)) break;
        else if(x <= y) cout << x << " " << y << endl;
        else cout << y << " " << x << endl;
        i += 1;
    }
    
    
    
    return 0;
}
