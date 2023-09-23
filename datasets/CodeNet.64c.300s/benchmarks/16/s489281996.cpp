#include <iostream>

using namespace std;

int max_value(int maxv, int max){
    if(maxv > max){
        return maxv;
    }
    else {
        return max;
    }
}

int min_value(int minv, int min){
    if(minv < min){
        return minv;
    }
    else {
        return min;
    }
}

int main() {
    int i,n,r[200000];

    cin >> n;

    for(i = 0;i < n;i++){
        cin >> r[i];
    }

    int maxv = -2000000000;
    int minv = r[0];

    for(i = 1;i < n;i++){
        maxv = max_value(maxv, r[i] - minv);
        minv = min_value(minv, r[i]);
    }
    
    cout << maxv << endl;
   
    return 0;
}