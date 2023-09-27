#include <iostream>

using namespace std;


int main(){
    int i = 1,x;
    while(true){
        cin >> x;
        if(!x)break;
        cout << "Case " << i << ": " << x << endl;
        ++i;
    }
    return 0;
}
