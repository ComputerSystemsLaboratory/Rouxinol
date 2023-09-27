#include <iostream>
using namespace std;

int main(){
    int N, x, y, z, i;
    cin >> N;
    int count[1000000];
    for (i=1; i<=N; i++){
        count[i]=0;
    }
    for (x=1; x<=100; ++x){
        for (y=1; y<=100; ++y){
            for (z=1; z<=100; ++z){
                count[x*x+y*y+z*z+x*y+x*z+y*z]++;
            }
        }
    }
    for (i=1; i<=N; ++i){
        cout << count[i] << endl;
    }
    return 0;
}
