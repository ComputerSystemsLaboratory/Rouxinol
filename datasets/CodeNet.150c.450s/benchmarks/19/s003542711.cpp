#include <iostream>

using namespace std;

int main()
{
    int x,y,temp;
    while(1){
        cin >> x >> y;
        if(x==0 && y==0) break;
        if(x < y){
            cout << x << " " << y << endl;
        }
        else{
            temp=x;
            x=y;
            y=temp;
            cout << x << " " << y << endl;
        }
    }
}