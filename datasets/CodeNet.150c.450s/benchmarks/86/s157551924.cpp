#include <iostream>
using namespace std;
 
int main() {
    int n,m;
    double p;
    int a[1001];
    while(1){
        double num = 0;
        double result;
        cin >> n >> m >>p;
        if(n+m+p == 0)break;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            num += a[i];
        }
        if(a[m-1] == 0){
            cout << 0 <<endl;
            continue;
        }
        result = num*(100-p)/a[m-1];
        cout << (int)result <<endl;
    }
    return 0;
}