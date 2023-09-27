#include <iostream>

using namespace std;

int main(){
    int e;
    while(cin >> e && e > 0){
        int min;
        min = 1000000;
        for(int y=0; y<=1000; y++){
            for(int z=0; z<=100; z++){
                int m, x;
                m = e - y*y + y - z*z*z + z;
                x = e - y*y - z*z*z;
                if(min > m && x >= 0 ){
                    min = m;
                }
            }
        }
        cout << min << endl;
    }
}