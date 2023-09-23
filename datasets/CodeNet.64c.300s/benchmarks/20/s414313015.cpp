#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int d;
    while(cin >> d){
        int total = 0;
        for(int i = 0; i < 600/d - 1; i++){
            total = total + d*d*d*(i+1)*(i+1);
        }
        cout << total << endl;
    }
}