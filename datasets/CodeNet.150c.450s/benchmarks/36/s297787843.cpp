#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <sstream>
 
using namespace std;
 
int main(){
     int n;
     int S;
     while(cin >> n){
        S = 0;
        for(int i = 0; i < 600; i += n){
            S += n * i * i;
        }
        cout << S << endl;
     }
    return 0;
}