#include <iostream>
#include <string>
#include <queue>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
    
    int n;
    cin >> n;
    int cnt = 0;
    int building[12][10] = {{0}};

    int b, f, r, v;
    int left, right = 0;
    for(int i=0; i<n; i++){
        cin >> b >> f >> r >> v;
        left = (b-1)*3 + f-1;
        right = r-1;
        building[left][right] += v;
    }

    for(int i=0; i<12; i++){
        for(int j=0; j<10; j++){
            cout <<" " <<  building[i][j];
        }
        cout << endl;
        if( (i%3 == 2) && (cnt<3)){
            cout << "####################" << endl;
            cnt++;
        }
    }
    return 0;
}