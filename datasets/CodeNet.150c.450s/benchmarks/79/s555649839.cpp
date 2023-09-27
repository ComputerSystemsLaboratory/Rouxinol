
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
    for (; ;) {
        int n, r;
        cin >> n >>r;
        if (n==0&&r==0) {
            break;
        }
        vector<int> yama(n);
        for (int i=0; i<n; i++) {
            yama[i]=n-i;
        }
        for (int i=0; i<r; i++) {
            int p ,c;
            cin >> p >> c;
            vector<int> temp(c);
            for (int j=0;j<c; j++) {
                temp[j]=yama[p-1+j];
            }
            for (int j=p-2; j>=0;j--) {
                yama[c+j]=yama[j];
            }
            for (int j=0; j<c; j++) {
                yama[j]=temp[j];
            }
            }
        cout <<yama[0]<<endl;
}
}