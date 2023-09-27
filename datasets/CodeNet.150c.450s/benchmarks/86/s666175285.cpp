#include <iostream>
using namespace std;
int main(void){
    int n = 0, m = 0, p = 0;
    while(cin >> n >> m >> p){
        if(n == 0){
            break;
        }
        int allG = 0;
        int plaier[100];
        for(int i = 0; i < 100; i++){
            plaier[i] = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> plaier[i];
            allG += plaier[i];
        }
        int forG = allG * (100-p);
        if(plaier[m-1] == 0){
            cout << 0 << endl;
        }
        else{
            cout << forG / plaier[m-1] << endl;
        }
    }
    return 0;
}

