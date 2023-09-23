#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int x,y;
    int r = 0;
    cin >> x >> y;
    if(x < y) swap(x,y);
    while(y > 0){
    	r = x%y;
    	x = y;
    	y = r;
    }
    cout << x<<endl;
    return 0;
}

