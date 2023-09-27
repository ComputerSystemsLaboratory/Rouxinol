#include <iostream>
using namespace std;

int main(){
    int f[601];
    for(int i=0; i<600; i++){
        f[i] = i*i;
    }
    int d;
    while(cin >> d){
        int S=0;
        for(int i=1; i<600/d; i++){
            S+=d*f[i*d];
        }
        cout << S << endl;
    }
    return 0;
}