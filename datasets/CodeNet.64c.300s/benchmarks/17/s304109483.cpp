#include <iostream>
using namespace std;

int tax(int, int);

int main(){
    int x, y, s, i, j;
    while(cin >> x >> y >> s && 0 < x && x < 100 && 0 < y && y < 100 && 10 < s && s < 1000 ){
        int maximum = 0;
        for (i = 1; i < s; i++){
            for (j = 1; j < s; j++){
                if(tax(x,i) + tax(x,j) == s){
                    maximum = max(maximum, tax(y,i) + tax(y,j));
                }
            }
        }
        cout << maximum << endl;
    }
}

int tax(int s, int t){
    return (s+100)*t/100;
}