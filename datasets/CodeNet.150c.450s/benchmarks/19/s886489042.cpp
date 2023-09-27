#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int x,y;
    while(cin >> x >> y,x || y){
        if(x > y) cout << y << " " << x << endl;
        else cout << x << " " << y << endl;
    }
    return 0;
}