#include <iostream>
using namespace std;

int main(){
    int x[25565];
    x[0] = 1;
    int i = 1;
    while(x[i-1] != 0){
        cin >> x[i];
        i++;
    }
    i = 1;
    while(x[i] != 0){
        cout << "Case " << i << ": " << x[i] << endl;
        i++;
    }
}