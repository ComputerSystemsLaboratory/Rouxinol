#include<iostream>
#include<cmath>
using namespace std;

typedef struct xyz{
    double x;
    double y;
}XYZ;

int main(void){

    int times;
    cin >> times;

    XYZ a,b,c,d;
    double x1,y1,x2,y2;

    while(times > 0){
        cin >> a.x >> a.y;
        cin >> b.x >> b.y;
        cin >> c.x >> c.y;
        cin >> d.x >> d.y;

        x1 = a.x - b.x;
        y1 = a.y - b.y;
        x2 = c.x - d.x;
        y2 = c.y - d.y;

        

        if(fabs((y1 * x2) - (y2 * x1)) <= 1e-10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

        times--;
    }


    return 0;
}