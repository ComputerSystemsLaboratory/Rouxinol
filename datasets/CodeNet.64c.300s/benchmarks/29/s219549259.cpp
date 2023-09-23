#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main(){
        int E;
        while(cin >> E && E){
                int m=1000000;
                for(int z=0; z*z*z<=E; ++z){
                        for(int y=0; y*y+z*z*z<=E; ++y){
                                int x = E-z*z*z-y*y;
                                m = min(m,x+y+z);
                        }
                }
                cout << m << endl;
        }

}