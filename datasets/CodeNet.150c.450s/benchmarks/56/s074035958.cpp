#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n < 0 || n > 10000)  return -1;
    int o1 = 1000000;
    int o2= -1000000;
    long o3=0;
    for(int i = 0; i < n; i ++){
        int tmp ;
        cin >> tmp;
        if(tmp < -1000000 || tmp > 1000000) return -1;
        if(tmp < o1) o1 = tmp;
        if(tmp > o2) o2 = tmp;
        o3 += tmp;
    }

    cout << o1 << " " << o2 << " " << o3 << endl;

    return 0;
}
