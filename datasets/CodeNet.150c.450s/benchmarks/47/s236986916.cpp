#include <iostream>
using namespace std;

//????????¢??????????????\??£?????????????????????

int main(int argc, char *argv[]){
        int W, H, x, y, r;
        bool isOut;
        cin >> W >> H >> x >> y >> r;
        if (x - r < 0 || x + r > W 
         || y - r < 0 || y + r > H){
                cout << "No\n"; 
        } else {
                cout << "Yes\n";
        }
}