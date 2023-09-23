

#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;


int main(){

    int a[MAX];
    int minv = 0;
    int maxv = 0;
    int n;
    
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    minv = a[0];
    maxv = a[1] - a[0];
    
    for(int i = 1;i < n;i++){
        maxv = max(maxv,a[i] - minv);
        minv = min(minv, a[i]);
    }
    
    cout << maxv << endl;
    return 0;
}