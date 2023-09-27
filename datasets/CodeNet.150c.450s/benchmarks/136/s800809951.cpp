#include <iostream>

using namespace std;

int main() {
    int a,b,big,small,r;

    while(1){
        cin >> a >> b;
        if(cin.eof()){
            break;
        }
        
        if(a > b){
            big = a;
            small = b;
        }
        else {
            big = b;
            small = a;
        }
        
        r = big % small;
        while(r != 0){
            big = small;
            small = r;
            r = big % small;
        }
        
    cout << small << ' ' << (a / small) * (b / small) * small << endl;
    
    }

    return 0;
}