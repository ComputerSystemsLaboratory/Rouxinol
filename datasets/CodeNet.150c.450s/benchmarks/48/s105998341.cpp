#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int e;
    while(cin>>e&&e!=0){
        int minSum=100000000;
        for(int z = 0; z <= 100; z++){
            if(e-(z*z*z)<0)
                break;
            for(int y = 0; y <= 1000; y++){
                if(e-y*y-z*z*z<0)
                    break;
                int x=e-y*y-z*z*z;
                minSum=min(minSum,x+y+z);
            }
        }
        cout<<minSum<<endl;
    }
    return 0;
}