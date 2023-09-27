#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> n;
    for(int i=0; i<n; i++){
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if(fabs(x2-x1)<0.0000000001 && fabs(x4-x3)<0.0000000001)   cout << "YES" <<endl;
        else{
            if(fabs((y2-y1)/(x2-x1) - (y4-y3)/(x4-x3))<0.0000000001)  cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
    return 0;
}
