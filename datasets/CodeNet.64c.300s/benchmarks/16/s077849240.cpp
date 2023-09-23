#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //inputs
    int n;
    cin >> n;
    int R[n];
    for(int i=0;i<n;i++){
        cin >> R[i];
    }
    
    //calculation
    int minv = R[0];
    int maxv = -1000000001;
    for(int j=1;j<n;j++){
        maxv = max(maxv, R[j]-minv);
        minv = min(minv, R[j]);
    }
    
    //output
    cout << maxv << endl;
}