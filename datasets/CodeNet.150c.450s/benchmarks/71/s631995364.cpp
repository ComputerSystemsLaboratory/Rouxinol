//
// Created by Tian Wang on 16/4/17.
//

#include <iostream>
using namespace std;



int main() {
    int n;
    int out;
    while(cin >> n){
        out=0;
        for(int i = 0; i <= 9 && i <= n; i ++) {
            for(int j = 0; j<=9 && j <= n; j++) {
                for(int k = 0; k<=9 && j <= n; k++) {
                    if(i+j+k <= n && i+j+k >= n-9) {
                        out+=1;
                    }
                }
            }
        }
        cout << out << endl;
    }
}