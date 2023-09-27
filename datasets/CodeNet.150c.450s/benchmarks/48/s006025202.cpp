#include <iostream>
#include <cmath>
using namespace std;

int main(){
        int e;
        while(cin >> e && e > 0){
                unsigned int m = e;
                for(int z=0;z*z*z<=e;z++){
                        for(int y=0;y*y+z*z*z<=e;y++){
                                int x = e - y * y - z * z * z;
                                if(x >= 0){
                                        unsigned int sum = x + y + z;
                                        m = min(m,sum);
                                }
                        }
                }
                cout << m << endl;
        }
}