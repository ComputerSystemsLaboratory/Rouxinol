#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;
int arr[100000]={0};
int main() {
    unsigned long long x,y=0, a=0,d=0;
    cin>>x;

    for(int i=1;i<=130;i++){
        for(int w=1;w<=130;w++){
            for(int y=1;y<=130;y++){
                if(((i*i)+(w*w)+(y*y)+(i*w)+(i*y)+(y*w))<=x){
                    arr[((i*i)+(w*w)+(y*y)+(i*w)+(i*y)+(y*w))]++;

                }

            }

        }
    }
    for(int i=1;i<=x;i++){
        cout<<arr[i]<<"\n";
    }
return 0 ;
}