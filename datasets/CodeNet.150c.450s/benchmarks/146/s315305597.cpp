#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        float x1,x2,x3,x4,y1,y2,y3,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        float a = (y1-y2)*(x3-x4);
        float b = (y3-y4)*(x1-x2);
        if(a==b)    cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}
