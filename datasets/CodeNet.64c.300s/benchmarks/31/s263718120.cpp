#include <iostream>
using namespace std;

int main(){
    bool submitted[30] = {false};
    int id;

    for(int i=1; i<=28; i++){
        cin >> id;
        submitted[id-1] = true;
    }

    for(int i=0; i<30; i++){
        if(submitted[i] == false){
            cout << i+1 << endl;
        }
    }
    return 0;
}