#include <iostream>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;

    int n;

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3)){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}