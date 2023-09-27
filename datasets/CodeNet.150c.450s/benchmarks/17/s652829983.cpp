#include <iostream>
using namespace std;
int main(void){
    long int x[5];
    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }

    int tmp;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(x[i] < x[j]){
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout << x[i];
        if(i != 4) cout << " ";
        else cout << endl;
    }
}
