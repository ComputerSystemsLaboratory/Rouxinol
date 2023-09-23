#include <iostream>
using namespace std;

int main(){
    int x[3000], y[3000], a, b, i, j, tmp;
    i = 0;
    for (i = 0; i < 3000; ++i){
        cin >> x[i] >> y[i];
        a = x[i];
        b = y[i];
        if (a == 0 && b == 0){
            break;
        }
    }
    for (j = 0; j < i; ++j){
        if (x[j] > y[j]){
            tmp = x[j];
            x[j] = y[j];
            y[j] = tmp;
        }
        cout << x[j] << " " << y[j] << endl;
    }
}
