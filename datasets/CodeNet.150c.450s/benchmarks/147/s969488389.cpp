#include <iostream>
using namespace std;
int a[100006];
int main () {
    int N;
    cin >> N;
    for (int x=1; x<=100; x++) {
        for (int y=1; y<=100; y++) {
            for(int z=1; z<=100; z++) {
                a[x*x+y*y+z*z+x*y+y*z+z*x]++;
            }
        } 
    }
    for (int i=1; i<=N; i++) {
        cout << a[i] << endl;
    }
}