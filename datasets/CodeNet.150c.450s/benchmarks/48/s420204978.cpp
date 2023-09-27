#include<iostream>

using namespace std;

int main(){

    while(1){
        int e;
        cin>> e;
        if(!e) break;

        int m=1e8;
        for(int y=0; y<=1000; y++){
            for(int z=0; z<=100; z++){
                int x=e-y*y-z*z*z;
                if(x<0) continue;
                m=min(m, x+y+z);
            }
        }

        cout<< m<< endl;

    }

    return 0;
}