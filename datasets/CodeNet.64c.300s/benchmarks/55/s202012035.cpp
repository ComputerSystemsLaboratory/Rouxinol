#include <iostream>
using namespace std;

int main(){
    int x[10000], a, i, j;
    for (i = 0; i < 10000; ++i){
        cin >> x[i];
        a = x[i];
        if (a == 0){
            break;
        }
    }
    for (j = 0; j < i; ++j){
        cout << "Case " << j + 1 << ": " << x[j] << endl;
    }
return 0;
}

