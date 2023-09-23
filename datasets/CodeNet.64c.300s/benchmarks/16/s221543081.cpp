#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,x,maxv=-2000000000,minv;
    cin >> n;
    cin >> minv;
    for(int i=1;i<n;i++){
        cin >> x;
        maxv = max(maxv,x-minv);
        minv = min(minv,x);
    }
    
    cout << maxv << endl;
    return 0;
}
