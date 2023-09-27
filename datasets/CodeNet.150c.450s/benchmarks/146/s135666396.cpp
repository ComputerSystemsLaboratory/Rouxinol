#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    int i;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double cross;

    cin >> num;

    for(i = 0; i < num; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        cross = abs((x2 - x1) * (y4 - y3) - (y2 - y1) * (x4 - x3));
        if(cross < 1e-11){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}